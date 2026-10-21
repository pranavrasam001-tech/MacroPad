#include <Wire.h>
#include <Keyboard.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

constexpr uint8_t KEY_MAPS = D10;
constexpr uint8_t KEY_FLIGHTS = D9;
constexpr uint8_t KEY_HOTELS = D8;
constexpr uint8_t KEY_PLANNER = D2;

constexpr int SCREEN_WIDTH = 128;
constexpr int SCREEN_HEIGHT = 32;
constexpr int OLED_RESET = -1;
constexpr uint8_t OLED_ADDRESS = 0x3C;

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

struct KeyInfo {
  uint8_t pin;
  const char *label;
  const char *url;
};

KeyInfo keys[] = {
  {KEY_MAPS, "Maps", "https://maps.google.com"},
  {KEY_FLIGHTS, "Flights", "https://www.google.com/travel/flights"},
  {KEY_HOTELS, "Hotels", "https://www.google.com/travel/hotels"},
  {KEY_PLANNER, "Planner", "https://www.google.com/travel"}
};

constexpr size_t KEY_COUNT = sizeof(keys) / sizeof(keys[0]);
constexpr unsigned long DEBOUNCE_MS = 35;

bool lastReading[KEY_COUNT];
bool stableState[KEY_COUNT];
unsigned long lastChange[KEY_COUNT];

void showMessage(const char *line1, const char *line2 = "") {
  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println("TravelPad");
  display.drawLine(0, 10, SCREEN_WIDTH - 1, 10, SSD1306_WHITE);
  display.setCursor(0, 14);
  display.println(line1);

  if (line2[0] != '\0') {
    display.setCursor(0, 24);
    display.println(line2);
  }

  display.display();
}

void openUrl(const char *label, const char *url) {
  showMessage("Opening:", label);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(350);

  Keyboard.print(url);
  delay(100);
  Keyboard.press(KEY_RETURN);
  delay(80);
  Keyboard.releaseAll();

  delay(1200);
  showMessage("Ready", "Press a travel key");
}

void setup() {
  for (size_t i = 0; i < KEY_COUNT; i++) {
    pinMode(keys[i].pin, INPUT_PULLUP);
    lastReading[i] = digitalRead(keys[i].pin);
    stableState[i] = lastReading[i];
    lastChange[i] = 0;
  }

  Wire.setSDA(D4);
  Wire.setSCL(D5);
  Wire.begin();

  if (display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS)) {
    showMessage("Ready", "Press a travel key");
  }

  Keyboard.begin();
}

void loop() {
  for (size_t i = 0; i < KEY_COUNT; i++) {
    bool reading = digitalRead(keys[i].pin);

    if (reading != lastReading[i]) {
      lastChange[i] = millis();
      lastReading[i] = reading;
    }

    if ((millis() - lastChange[i]) > DEBOUNCE_MS &&
        reading != stableState[i]) {
      stableState[i] = reading;

      if (stableState[i] == LOW) {
        openUrl(keys[i].label, keys[i].url);
      }
    }
  }

  delay(2);
}
