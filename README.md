# Basic_Traffic_Light
3_stage_LED_traffic_light

This project demonstrates a simple 3-LED cycling sequence using an ESP32 or Arduino Uno. Three LEDs (connected to pins 12, 13, and 14) turn ON one at a time in a continuous loop, with each LED staying lit for 4 seconds before the next one takes over.

This is a great beginner project for learning:

Digital output control

pinMode() and digitalWrite() functions

Basic timing with delay()

State management (setting multiple pins at once)

🛠️ Hardware Requirements
Component	Quantity	Notes
ESP32 Dev Board OR Arduino Uno	1	Any model works
LEDs (any color)	3	Red, Green, Blue recommended
Resistors (220Ω - 330Ω)	3	Current-limiting resistors
Breadboard	1	For easy connections
Jumper Wires (Male-to-Male)	4-6	For wiring
🔌 Wiring Diagram
LED	ESP32/Arduino Pin	Ground
LED 1 (Red)	Pin 12	GND (via 220Ω resistor)
LED 2 (Green)	Pin 13	GND (via 220Ω resistor)
LED 3 (Blue)	Pin 14	GND (via 220Ω resistor)
Connection Steps:
Connect the long leg (anode) of each LED to its respective pin (12, 13, 14).

Connect the short leg (cathode) of each LED to a 220Ω resistor.

Connect the other end of each resistor to the GND pin on the board.
