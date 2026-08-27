# QuoteUSB

A small 3-button USB MacroPad built for HackClub as a hardware experiment with the CH552G microcontroller

![PCB](screenshots/pcb_f.png)

---

- **Microcontroller:** CH552G
- **Inputs:** 3 switches (Quote Generator 1, Quote Generator 2, Macro button)
- **Status:** Integrated LED indicator on keypress

For the full devlog and project history, check out [JOURNAL.md](JOURNAL.md).

### Firmware
1. Open `firmware/firmware.ino` in Arduino IDE
2. Select **CH552 Board** and upload method **USER CODE w/ 148B USB ram** using the ch55xduino core
3. Flash the CH552

### BOM
| Reference   | Qty | Value    | Footprint                                            | Datasheet                                                                                        |
|:------------|:----|:---------|:-----------------------------------------------------|:-------------------------------------------------------------------------------------------------|
| C1,C2       | 2   | 100nf    | Capacitor\_SMD:C\_0805\_2012Metric                   | \~                                                                                               |
| D1          | 1   | LED      | LED\_SMD:LED\_0805\_2012Metric                       | \~                                                                                               |
| J1          | 1   | USB\_A   | Connector\_USB:USB\_A\_Molex\_48037-2200\_Horizontal | \~                                                                                               |
| R1          | 1   | 330R     | Resistor\_SMD:R\_0805\_2012Metric                    | \~                                                                                               |
| SW1,SW2,SW3 | 3   | SW\_Push | Button\_Switch\_SMD:SW\_SPST\_PTS645Sx43SMTR92       | \~                                                                                               |
| U1          | 1   | CH552G   | Package\_SO:SOIC-16\_3.9x9.9mm\_P1.27mm              | https://github.com/WeActStudio/WeActStudio.CH552CoreBoard/blob/master/Datasheet/CH552DS1\_en.PDF |
