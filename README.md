# Intro to BadUSB-Leonarduino Project
This project aims to transform an Arduino board into a "BadUSB" to demonstrate how cyber criminals use this hardware to conduct Social Engineering attacks to compromise victims' devices.

## Disclaimer
>**Please note that this project is strictly meant for educational purposes. The developers cannot be held accountable for any improper use of the code or the information provided in this repository by third parties.**

## Why Arduino Leonardo?
Any board that mounts the [ATmega32u4](https://www.microchip.com/en-us/product/ATmega32U4) chip, which supports the use of the Keyboard library, can be used.
Arduino Leonardo Nano, for example, is well suited for this project because of the following features:
* can be used as [HID](https://en.wikipedia.org/wiki/Human_interface_device) - Human Interface Device and supports [Keyboard](https://www.arduino.cc/reference/en/language/functions/usb/keyboard/) Library
* is **extremely small**, can be hidden easily in a SSD or NVMe case (for fake external hard drive)
* is also available in **USB Type-C** version, which is more common on next-generation mass storage devices
* is **really inexpensive**, can be found for a few euros on online stores

## Configuration - TODO
The keyboard functions enable boards to send keystrokes to an attached computer through their micro's native USB port. The code is written in C++ and skatches can be easily uploaded to Arduino via [Arduino IDE](https://www.arduino.cc/en/software).

## Optional: Masking he Deception - TODO
Show external cases

# Use Cases
## Baiting: The Art of USB Drive Attacks
Baiting is a [Social Engineering](https://en.wikipedia.org/wiki/Social_engineering_(security)) cyber attack that exploits people's natural curiosity to lure them into digital traps. In a BadUSB attack, cybercriminals use compromised or fake memory devices, such as USB flash drives, that are left in strategic locations to lure victims. Once a hapless person finds and inserts the infected flash drive into their device, the malicious code contained within is activated, allowing them to gain full control of the device itself and its data.

### 1st Step: Cast The Bait
Many of you will remember Darlene Alderson, Elliot's younger sister in the famous Mr. Robot series, a malware coder and member of the hacker group fsociety. Although it is only one series, it still gives us a glimpse of how such an attack might be conducted.

![](https://github.com/Astaruf/badusb-leonarduino/blob/main/demo/attacker.gif?raw=true)

The technique is quite simple. The malicious device, suitably disguised by the cybercriminal, is left unattended in a strategic location near or within the target company, where it is likely to be noticed by one or more employees, piquing their interest and prompting them to explore its contents on the private or corporate computer.

### 2nd Step: Wait for The Fish
An unsuspecting user finds the USB flash drive and, believing he has found a lost item, decides to insert it into his computer to try to trace it back to its owner. The USB flash drive contains malicious code that is automatically executed as soon as the device is plugged in.

![](https://github.com/Astaruf/badusb-leonarduino/blob/main/demo/victim.gif?raw=true)

Generally, attackers tend to use the malicious code as an initial access or dropper of other code doing so silently, bypassing any antivirus, trying to scale privileges or gain persistence within the system. The actions that a BadUSB can perform are innumerable, the only limits are imagination and coding skills.

# Mitigations: Never Rely on Appearances
In 2023, it might be surprising that some people still fall for connecting a sketchy USB drive to their computer. However, the truth is, despite fancy tech, people still make mistakes. But there's more to it. The danger gets sneakier with the ability to hide stuff like Arduino, making it seem cooler than a regular USB drive.

Imagine this: you find an outside hard drive cover, maybe a slick 2TB Samsung one, looking all innocent and tempting. In a world where looks and size can trick you, who wouldn't want to take such a cool "tech treasure" home? Here's the catch: there's an Arduino inside that seems harmless. Once at home, the appeal could get too much, and the urge to plug it into your device could be stronger than thinking twice.

I dare anyone not to feel curious about this. It's tough to say no, even when it seems like tech has gotten super smart. The lesson is that, even with smarts and being careful, human curiosity can still beat everything. It's a reminder that the digital world, while getting better fast, can't escape human mistakes and how things look.
