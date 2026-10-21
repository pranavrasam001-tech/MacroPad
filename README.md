# TravelPad — Travel-Themed 4-Key Macropad

TravelPad is a 4-key macropad I designed to make everyday travel planning a little easier. The idea is to assign each key a shortcut for quickly opening tools like Google Maps, flight-booking websites, hotel-booking platforms, and my personal travel planner.

I designed the PCB using KiCad and modelled the enclosure in Fusion 360. The design uses a Seeed Studio XIAO RP2040 microcontroller, four mechanical keys, and a 0.91-inch I²C OLED display.

This project combines my interest in travelling with my interest in PCB design and hardware development.

**Project Status:** The PCB design and manufacturing files are available in the repository. Firmware development, physical assembly, and testing are still pending.

---

## Project Overview

| Specification | Details |
|---|---|
| Project Name | TravelPad |
| Type | Travel-Themed Macropad |
| Keys | 4 Mechanical Keys |
| Microcontroller | Seeed Studio XIAO RP2040 |
| Display | 0.91-inch I²C OLED |
| Connection | USB-C |
| PCB Design | KiCad |
| Enclosure Design | Fusion 360 |

---

## The Idea Behind TravelPad

I wanted to build something more interesting than a regular macropad, so I decided to give it a travel theme.

When planning a trip, I often switch between maps, flight websites, and hotel-booking platforms. TravelPad is my attempt to make accessing these tools quicker and more convenient.

The plan is to assign a different shortcut to each of the four keys. I have also included an OLED display in the design, which can be used to show information once the firmware is implemented.

---

## Features

- Four mechanical keys for custom shortcuts.
- A 0.91-inch I²C OLED display.
- Custom PCB designed in KiCad.
- Enclosure modelled in Fusion 360.
- USB-C connectivity.
- Planned shortcuts for commonly used travel tools.

The key functions and display behaviour will depend on the firmware, which still needs to be developed and tested.

---

## Project Gallery

### PCB Design

![TravelPad PCB Design](https://github.com/user-attachments/assets/fe3fb284-f9a5-4e61-a823-58e22bed9cda)

### PCB Layout

![TravelPad PCB Layout](https://github.com/user-attachments/assets/7d6a8490-bb10-4c89-a98a-4c8cb951d0b6)

### PCB Design Details

![TravelPad PCB Design Details](https://github.com/user-attachments/assets/059fedcd-6965-478d-93d8-1932c5c544e1)

### Additional Design View

![TravelPad Design View](https://github.com/user-attachments/assets/9302990d-283a-4548-9167-e84f3983fd65)

---

## Hardware Components

| Designator | Component | Quantity |
|---|---|---:|
| SW1, SW2, SW3, SW5 | Mechanical switches | 4 |
| U1 | XIAO-compatible controller module | 1 |
| U3 | 0.91-inch I²C OLED display | 1 |

The exact component models should be checked against the schematic before purchasing or assembling the hardware.

---

## Project Files

The repository contains the following design and manufacturing files:

- `macropad.kicad_sch` — Circuit schematic
- `macropad.kicad_pcb` — PCB layout
- `macropad.kicad_pro` — KiCad project file
- `BOM.csv` — Bill of Materials
- Gerber files for PCB manufacturing
- `macropad fusion.f3d` — Fusion 360 model

These files can be used to review the design, make changes, and prepare the PCB for manufacturing.

---

## PCB Design Checks

The available KiCad Design Rules Check (DRC) report shows:

- Unconnected pads: 0
- Footprint errors: 0
- Silkscreen-over-copper warnings: 17

The silkscreen warnings need to be reviewed before manufacturing.

---

## Tools Used

- **KiCad:** For circuit design, PCB layout, and Gerber generation.
- **Fusion 360:** For modelling the enclosure.

---

## What I Learned

Working on TravelPad helped me understand the basics of PCB design, component placement, trace routing, and Gerber file generation. I also learned how to plan a custom enclosure and consider how electronic components fit together in a physical device.

It gave me a chance to explore how a simple hardware project can be designed around a practical everyday use case.

---

## What's Next?

- Develop firmware for the four keys.
- Configure shortcuts for travel-related tools.
- Add functionality to the OLED display.
- Assemble and test the PCB.
- Refine the enclosure based on the physical build.

---

## Author

**Manish Vanjari**

TravelPad is a personal project that combines my interest in travelling with my journey into PCB design and hardware development.
