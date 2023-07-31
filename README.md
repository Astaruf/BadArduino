# badusb-leonarduino
This project aims to allow an Arduino Leonardo to be turned into a "BadUSB." The BadUSB is a type of device that can be used to perform cyber attacks, such as inserting malware into a computer and executing code without the victim's knowledge.

The project was created for educational purposes and should be used only for lawful purposes, for understanding certain types of attacks. The author of the project assumes no responsibility for any damage caused by the use of the code.

The code is written in C++ and uses Arduino's HID library to emulate a USB keyboard. The code is designed to simulate a series of keystrokes on the keyboard, such as pressing a Windows key followed by starting a program.

# Scenario
The attacker leaves a compromised USB flash drive in a public area, such as a waiting room or parking lot, so that it can be found by someone. The USB flash drive could be disguised as a promotional gadget or a seemingly innocuous object.

An unsuspecting user finds the USB flash drive and, believing he has found a lost item, decides to insert it into his computer to try to trace it back to its owner. The USB flash drive contains malicious code that is automatically executed as soon as the device is plugged in.

![](https://github.com/Astaruf/badusb-leonarduino/blob/main/demo/badusb.gif?raw=true)

The malicious code could be designed to perform a number of malicious operations, such as:
- Install malware on the computer to steal data or control the system
- Create a new account with administrator privileges
- Change system security settings
- Execute commands to compromise the system or damage data
- Execute a phishing attack to steal login credentials

The unsuspecting user may not realize that they are putting the security of their system and personal data at risk. This type of social engineering-based attack exploits human curiosity to lure victims into falling into the trap.
