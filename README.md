# What is BadNVME-leonarduino?
This project aims to turn an [Arduino Leonardo](https://docs.arduino.cc/hardware/leonardo) ([ATmega32u4](https://www.microchip.com/en-us/product/ATmega32U4) chip based) into a "BadUSB" to demonstrate, <i>**for educational purposes only**</i>, how cyber criminals use this hardware to conduct Social Engineering attacks to compromise victims' devices.

>**Please note that this project is strictly meant for educational purposes. The developers cannot be held accountable for any improper use of the code or the information provided in this repository by third parties.**

The code is written in C++ and uses Arduino's [HID library](https://www.arduino.cc/reference/en/libraries/keyboard/) to emulate a USB keyboard. The code is designed to simulate a series of keystrokes on the keyboard, such as pressing a Windows key followed by starting a program.

# Attack Scenario
## Baiting: The Art of USB Drive Attacks
Baiting is a [Social Engineering](https://en.wikipedia.org/wiki/Social_engineering_(security)) cyber attack that exploits people's natural curiosity to lure them into digital traps. In a BadUSB attack, cybercriminals use compromised or fake memory devices, such as USB flash drives, that are left in strategic locations to lure victims. Once a hapless person finds and inserts the infected flash drive into their device, the malicious code contained within is activated, allowing them to gain full control of the device itself and its data.

### 1st Step: Cast The Bait
Many of you will remember Darlene Alderson, Elliot's younger sister in the famous Mr. Robot series, a malware coder and member of the hacker group fsociety. Although it is only one series, it still gives us a glimpse of how such an attack might be conducted.

![](https://github.com/Astaruf/badusb-leonarduino/blob/main/demo/attacker.gif?raw=true)

The attacker leaves a malicious USB flash drive in a public area, such as a waiting room or parking lot, so that it can be found by someone. The USB flash drive could be disguised as a promotional gadget or a seemingly innocuous object.

### 2nd Step: Wait for The Fish
An unsuspecting user finds the USB flash drive and, believing he has found a lost item, decides to insert it into his computer to try to trace it back to its owner. The USB flash drive contains malicious code that is automatically executed as soon as the device is plugged in.

![](https://github.com/Astaruf/badusb-leonarduino/blob/main/demo/fish.gif?raw=true)

Generally, attackers tend to use the malicious code as an initial access or dropper of other code doing so silently, bypassing any antivirus, trying to scale privileges or gain persistence within the system. The actions that a BadUSB can perform are innumerable, the only limitation being the imagination of those who developed the code.


