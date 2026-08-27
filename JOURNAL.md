# Journal

**Project name**: QuoteUSB
A small 3-button USB MacroPad built for HackClub as a hardware experiment with the CH552G microcontroller

**Total hours:** 20.5

#### August 26: Learning time
Time spent: 2 hours
I began to get used to KiCad, learning how it works and how to use it.

#### August 27: Development
*Time Spent: 5 hours*
Started the project by creating the project for ATtiny85 with 2 buttons but then moved to CH552G with 3 buttons and 1 LED.

*Time Spent: 3 hours*
Moved to PCB Editor in KiCad. Arranged the 3 switches, status LED, and USB-A PCB trace connector to fit a tight form factor. Carefully routed all trace lines, ensuring clean USB differential signals and a solid GND plane. Completed DRC (Design Rules Check) with no errors and generated the initial 3D STEP models.

*Time Spent: 4 hours*
Ran into compilation issues with the ch55xduino core due to libraries and RAM settings. Resolved the issue and programmed the 3 inputs: two buttons for random quote generation and one dedicated macro button.

*Time Spent: 6.5 hours*
Started using Autodesk Fusion for the first time and designed the case for the PCB.