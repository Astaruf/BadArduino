# Table of contents
1. [Intro to BadArduino Project](https://github.com/Astaruf/BadArduino/tree/main#intro-to-badarduino-project)
2. [Requirements](https://github.com/Astaruf/BadArduino/tree/main#requirements)
3. [Configuration](https://github.com/Astaruf/BadArduino/tree/main#configuration)
4. [Case Setup](https://github.com/Astaruf/BadArduino/tree/main#case-setup)
5. [Use Case](https://github.com/Astaruf/BadArduino/tree/main#use-case)
6. [Mitigations](https://github.com/Astaruf/BadArduino/tree/main#mitigations)

# Intro to BadArduino Project
This project aims to transform an [Arduino](https://www.arduino.cc/) board into a [BadUSB](https://en.wikipedia.org/wiki/BadUSB) to demonstrate how cyber criminals use this hardware to conduct [Social Engineering](https://en.wikipedia.org/wiki/Social_engineering_(security)) attacks to compromise victims' devices.
The result of this work can be useful as instrumentation for [Red Team](https://en.wikipedia.org/wiki/Red_team) operations to test a company's security.

>**Please note that this project is strictly meant for educational purposes. The developers cannot be held accountable for any improper use of the code or the information provided in this repository by third parties.**

# Requirements
This project requires:
* an **Arduino** - any board that mounts the [ATmega32u4](https://www.microchip.com/en-us/product/ATmega32U4) chip, which supports the use of the Keyboard library, can be used.
* a **case** - it is possible to use the case of a portable external hard drive, such as the one used below, inside which to hide Arduino.
* a **USB-C/A cable** - useful for configuring Arduino by uploading skatches
* **Arduino IDE** - for writing code and uploading skatches to Arduino

## Why Arduino Leonardo?
Arduino Leonardo Nano, for example, is well suited for this project because of the following features:
* is a **Human Interface Device** ([HID](https://en.wikipedia.org/wiki/Human_interface_device)) which supports [Keyboard](https://www.arduino.cc/reference/en/language/functions/usb/keyboard/) Library
* is **extremely small**, can be hidden easily in a SSD or NVMe case (for fake external hard drive)
* is also available in **USB Type-C** version, which is more common on next-generation mass storage devices
* is **really inexpensive**, can be found for a few euros on online stores

<img src="https://github.com/Astaruf/badusb-leonarduino/blob/main/demo/arduino.png" width="200"/>

Any board that mounts the [ATmega32u4](https://www.microchip.com/en-us/product/ATmega32U4) chip, which supports the use of the Keyboard library, can be used.

# Configuration
As is well known, the types of actions that Arduino can perform when connected to a host are innumerable. 
For demonstration purposes only, we are going to load the **example.ino** skatch that performs the following actions:
1. runs PowerShell in Windows (with or without [UAC](https://en.wikipedia.org/wiki/User_Account_Control) bypass).
2. captures the SSIDs and passwords of known Wi-Fi networks saved in Windows
3. exfiltrates the data to a server controlled by the attacker

# Case Setup
Arduino Leonardo Nano can be easily hidden into an external hard disk case. For example, SanDisk made a great job in terms of design and the semplicity of teardown makes the game easier:

![](https://github.com/Astaruf/badusb-leonarduino/blob/main/demo/teardown.gif?raw=true)

Once the internal components are removed, it is necessary to house the Arduino inside the case and secure it so that the USB-C port aligns properly with the slot in the case.

![](https://github.com/Astaruf/badusb-leonarduino/blob/main/demo/badarduino-clip-16.9.gif?raw=true)

The result is great, Arduino fits like a glove in the chosen hard drive shell.

# Use Case
## Baiting: Social Engineering and BadUSB Attack
Baiting is a Social Engineering cyber attack that exploits people's natural curiosity to lure them into digital traps. In a BadUSB attack, cybercriminals use compromised or fake memory devices, such as USB flash drives, that are left in strategic locations to lure victims. Once a hapless person finds and inserts the infected flash drive into their device, the malicious code contained within is activated, allowing them to gain full control of the device itself and its data.

### 1: Cast The Bait
Many of you will remember Darlene Alderson, Elliot's younger sister in the famous Mr. Robot series, a malware coder and member of the hacker group fsociety. Although it is only a series, it still gives us a glimpse of how such an attack might be conducted.

![](https://github.com/Astaruf/badusb-leonarduino/blob/main/demo/attacker.gif?raw=true)

The technique is quite simple. The malicious device, suitably disguised by the cybercriminal, is left unattended in a strategic location near or within the target company, where it is likely to be noticed by one or more employees, piquing their interest and prompting them to explore its contents on the private or corporate computer.

### Step 2: Hooking The Fish
An unsuspecting user finds the USB flash drive and, believing he has found a lost item, decides to insert it into his computer to try to trace it back to its owner. The USB flash drive contains malicious code that is automatically executed as soon as the device is plugged in.

![](https://github.com/Astaruf/badusb-leonarduino/blob/main/demo/victim.gif?raw=true)

Generally, attackers tend to use the malicious code as an initial access or dropper of other code doing so silently, bypassing any antivirus, trying to scale privileges or gain persistence within the system. The actions that a BadUSB can perform are innumerable, the only limits are imagination and coding skills.

# Mitigations
## Never Rely on Appearances
In 2023, it might be surprising that some people still fall for connecting a sketchy USB drive to their computer. However, the truth is, despite fancy tech, people still make mistakes. But there's more to it. The danger gets sneakier with the ability to hide stuff like Arduino, making it seem cooler than a regular USB drive.

Imagine this: you find an outside hard drive cover, maybe a slick SanDisk one, looking all innocent and tempting. In a world where looks and size can trick you, who wouldn't want to take such a cool "tech treasure" home? Here's the catch: there's an Arduino inside that seems harmless. Once at home, the appeal could get too much, and the urge to plug it into your device could be stronger than thinking twice.

I dare anyone not to feel curious about this. It's tough to say no, even when it seems like tech has gotten super smart. The lesson is that, even with smarts and being careful, human curiosity can still beat everything. It's a reminder that the digital world, while getting better fast, can't escape human mistakes and how things look.

## bInterfaceClass, IdProduct, IdVendor
https://lukasharris.com/2021/02/05/blocking-usb-rubber-ducky-attacks/
https://github.com/pmsosa/duckhunt
