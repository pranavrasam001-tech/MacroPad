# ✈️ TravelPad — Travel-Themed 4-Key Macropad

TravelPad is a compact, travel-themed macropad designed to make common trip-planning tasks easier to access. Instead of repeatedly opening websites manually, a single key can be assigned to launch a travel tool such as Google Maps, a flight-booking website, a hotel-booking website, or a personal travel planner.

The PCB was designed in **KiCad**, and the enclosure was modelled in **Fusion 360**. The design uses a **Seeed Studio XIAO RP2040** and a **0.91-inch I²C OLED display**.

> **Project Status:** The repository contains the design files and PCB manufacturing outputs. Physical assembly and firmware functionality should be documented separately once completed and tested.

---

## 📌 At a Glance

| Specification    | Details                   |
| ---------------- | ------------------------- |
| Project Name     | TravelPad                 |
| Project Type     | Travel-Themed Macropad    |
| Number of Keys   | 4 Mechanical Key Switches |
| Microcontroller  | Seeed Studio XIAO RP2040  |
| Display          | 0.91-inch I²C OLED        |
| Connection       | USB-C                     |
| PCB Design       | KiCad                     |
| Enclosure Design | Fusion 360                |

---

## 🌍 Why I Made It

I enjoy travelling, so I wanted to give a regular macropad a purpose connected to trip planning.

Instead of building a standard macropad, I decided to create a travel-themed device with custom artwork and a layout inspired by planning trips.

The goal is to build something that is both **useful and personal**—a small device that can sit beside my laptop and provide quick access to frequently used travel tools.

---

## ✨ Features and Intended Use

* **4 Programmable Mechanical Keys:** Assign individual actions to each key.
* **OLED Display:** A compact display integrated into the PCB design.
* **Custom PCB:** Designed using KiCad.
* **Custom Enclosure:** Modelled using Fusion 360.
* **USB-C Connection:** Connects the device to a computer.
* **Travel Shortcuts:** Intended to provide quick access to Google Maps, flight-booking websites, hotel-booking websites, and a personal travel planner.

> **Note:** These shortcuts require suitable firmware and, where necessary, computer-side configuration. Their functionality should be verified on the completed device.

---

## 🖼️ Project Gallery

### 1. PCB and Circuit Design

![TravelPad PCB Design](https://github.com/user-attachments/assets/fe3fb284-f9a5-4e61-a823-58e22bed9cda)

### 2. PCB Layout

![TravelPad PCB Layout](https://github.com/user-attachments/assets/7d6a8490-bb10-4c89-a98a-4c8cb951d0b6)

### 3. PCB Design Details

![TravelPad PCB Design Details](https://github.com/user-attachments/assets/059fedcd-6965-478d-93d8-1932c5c544e1)

### 4. Additional Design View

![TravelPad Design View](https://github.com/user-attachments/assets/9302990d-283a-4548-9167-e84f3983fd65)

<img width="1917" height="988" alt="image" src="https://github.com/user-attachments/assets/e4735d15-f1d7-4d25-8c02-59c329be5e24" />


> **Note:** Add an actual photograph of the assembled macropad when available. CAD renders and PCB screenshots should not be presented as photographs of completed hardware.

---

## 🔧 Hardware and Bill of Materials

The supplied Bill of Materials (BOM) lists the following components:

| Designator         | Component / Description                                    | Quantity |
| ------------------ | ---------------------------------------------------------- | -------: |
| SW1, SW2, SW3, SW5 | Mechanical push switches using Cherry MX 1U PCB footprints |        4 |
| U1                 | Seeed Studio XIAO-compatible module footprint              |        1 |
| U3                 | 0.91-inch I²C OLED footprint                               |        1 |

The BOM identifies the listed parts and PCB footprints. Before purchasing components, check the schematic and confirm the exact controller and OLED module variants.

---

## ⚙️ How TravelPad Works

TravelPad is designed to provide a simple interface for accessing commonly used travel tools.

1. **USB Connection:** The device connects to a computer through its USB-C connection.
2. **Microcontroller:** The Seeed Studio XIAO RP2040 acts as the controller. Suitable firmware reads key presses and implements the intended behaviour.
3. **Mechanical Key Input:** Each mechanical switch provides a physical input when pressed.
4. **OLED Display:** The 0.91-inch I²C OLED is included in the hardware design. Its displayed content depends on the firmware.
5. **Travel Shortcuts:** With suitable firmware and any required computer-side configuration, individual keys can be assigned actions such as opening a map, a flight-booking website, a hotel-booking website, or a travel planner.

> **Important:** The hardware design establishes the intended functionality, but firmware implementation and shortcut testing must be verified separately.

---

## ⌨️ Key Mapping

Update this table when the key assignments have been implemented and tested.

| Key   | Intended Action  | Status             |
| ----- | ---------------- | ------------------ |
| Key 1 | To be configured | Not documented yet |
| Key 2 | To be configured | Not documented yet |
| Key 3 | To be configured | Not documented yet |
| Key 4 | To be configured | Not documented yet |

---

## 🛠️ Assembly Overview

The exact assembly order and mounting method should be confirmed using the Fusion 360 model and PCB design. The following steps provide a general assembly checklist.

### Step 1: Review the Design Files

Open the schematic and PCB layout in KiCad. Inspect the Fusion 360 model to check the alignment of the PCB, switches, OLED display, USB-C connection, and enclosure.

### Step 2: Prepare the PCB

Use the supplied Gerber files for PCB fabrication. Review the board outline and manufacturing outputs before ordering the board.

### Step 3: Install the Mechanical Switches

Fit the four mechanical switches into their designated PCB footprints and solder them according to the component specifications.

### Step 4: Install the Controller

Mount the Seeed Studio XIAO RP2040 module in the U1 footprint. Verify the orientation against the schematic and PCB silkscreen before soldering.

### Step 5: Install the OLED Display

Install a compatible 0.91-inch I²C OLED in the U3 footprint. Confirm the pin order and orientation using the actual module documentation and schematic.

### Step 6: Inspect the PCB

Inspect solder joints, component orientation, and possible solder bridges. Verify the board against the schematic before connecting it to USB.

### Step 7: Fit the Enclosure

Position the PCB inside the Fusion 360-designed enclosure. Check that the switches, OLED display, and USB-C connection align correctly. Follow the mounting arrangement shown in the actual CAD model.

### Step 8: Configure the Firmware

Load the intended firmware and test each switch and the OLED display. Add the firmware source code and setup instructions to the repository when available.

### Step 9: Test the Shortcuts

Verify that each key performs its assigned action on the target computer. Document any additional software, permissions, or configuration required.

### ⚠️ Before Powering On

* Confirm the controller and OLED orientation.
* Check for solder bridges and loose conductive parts.
* Verify power and ground connections against the schematic.
* Do not connect USB if you suspect a short circuit or incorrect component orientation.

---

## 📂 Design and Manufacturing Files

The project includes the following design and manufacturing files:

| File                        | Purpose                     |
| --------------------------- | --------------------------- |
| `macropad.kicad_sch`        | Circuit schematic           |
| `macropad.kicad_pcb`        | PCB layout                  |
| `macropad.kicad_pro`        | KiCad project configuration |
| `BOM.csv`                   | Bill of Materials           |
| `macropad-F_Cu.gbr`         | Front copper layer          |
| `macropad-B_Cu.gbr`         | Back copper layer           |
| `macropad-F_Mask.gbr`       | Front solder mask           |
| `macropad-B_Mask.gbr`       | Back solder mask            |
| `macropad-F_Silkscreen.gbr` | Front silkscreen            |
| `macropad-B_Silkscreen.gbr` | Back silkscreen             |
| `macropad-F_Paste.gbr`      | Front solder paste layer    |
| `macropad-B_Paste.gbr`      | Back solder paste layer     |
| `macropad-Edge_Cuts.gbr`    | PCB outline                 |
| `macropad-job.gbrjob`       | Gerber job information      |
| `macropad fusion.f3d`       | Fusion 360 model            |

> **Note:** Actual filenames may differ slightly depending on the filenames used in your repository.

The Gerber files are manufacturing outputs for the PCB, while the KiCad files preserve the electronic design. The Fusion 360 file contains the mechanical model.

Keeping these files organised makes it easier for others to inspect, modify, and reproduce the design.

---

## ✅ Design Validation

The supplied KiCad Design Rules Check (DRC) report records:

* **Unconnected pads:** 0
* **Footprint errors:** 0
* **Silkscreen-over-copper warnings:** 17

The silkscreen warnings should be reviewed before manufacturing. The design should not be described as completely warning-free.

---

## 💻 Tools Used

* **KiCad:** Circuit schematic, PCB layout, and Gerber generation.
* **Fusion 360:** Enclosure and mechanical CAD design.

---

## 📚 What I Learned

While working on TravelPad, I practised:

* Designing a PCB from scratch.
* Routing PCB traces and preparing Gerber files.
* Integrating an OLED display into a custom PCB design.
* Working across electronic design and enclosure CAD.
* Understanding the relationship between PCB footprints and physical components.
* Exploring how physical controls can simplify everyday computer tasks.

---

## 🚀 Future Improvements

Potential next steps for TravelPad include:

* Implementing and testing firmware for all four keys.
* Displaying useful information on the OLED.
* Assigning shortcuts to frequently used travel tools.
* Testing the assembled hardware and documenting the results.
* Adding photographs of the completed device.
* Improving the enclosure and cable-management design where needed.

These are potential improvements, not claims about features already implemented.

---

## 👨‍💻 Author

**Manish**

TravelPad is a personal project that combines my interest in travelling with PCB design, mechanical CAD, and practical computer shortcuts.
