# Capture The Flag (CTF) - Linux Binary Exploitation Challenges Lab

## Basic Knowledge Requirements

- Linux  (Ubuntu, Parrot OS or Kali Linux is recommended)
- Linux security features  (RELRO, Canary, NX, PIE & etc)
- GNU Debugger (GDB)  
- GDB Plugins (gef, pwndbg & etc)  
- Assemble Language knowledge (optional when Ghidra or IDA is in force)  
- Ghidra or IDA (optional but recommended)
- C/C++ Language knowledge 
- Python Language  (Python 3 is recommended)
- Exploit Development skill 
- pwntools (optional but recommended)  

## Challenges

If you can solve the following challenges, please let me know (```Discord @samiux#3445```).  

### Linux Binary Exploitation (Pwn) Challenges Lab

PwnCTF 2022 is developed on CTFd Framework.  The challenges are mainly designed for Pwnable and Practical purpose.  Difficulty is basic to intermediate level.  No heap exploitation is involved.

PwnCTF 2022 and PwnCTF 2022 Now are based on Glibc 2.31 an Glibc 2.35 respectively.  Glibc 2.35 is from Ubuntu 22.04 LTS while Glibc 2.31 is from Ubuntu 20.04 LTS.  There are a total of 10 challenges for each version.  Meanwhile, both versions have the same binaries.

#### Usage

Import the ova file into Virtualbox (or VMWare) and access the control panel at the server IP address on port 8000 with browser (e.g. http://192.168.56.50:8000).  It is well tested on Virtualbox.  Network interface is "Bridged Network" by default.  Please change the type of network interface on Virtualbox when necessary.   Please register at the control panel page for the challenges.   

#### Download

- __sha256 : 99c024724fd8cf71da321c5461e9880969ad59a2f9c87ccaf9c95a763f85c471 -- PwnCTF 2022.ova (Glibc 2.31)__  

- [Download PwnCTF 2022.ova (5.9GB)](https://drive.google.com/file/d/1XgQ3PAbL4im6vJUMbfiMisXsov_gew_L/view?usp=sharing)  

- __sha256 : aa043339d91e98e16eeabd44b788526274a257eea2516ca3adb713c1b6245a5c -- PwnCTF 2022 Now.ova (Glibc 2.35)__  

- [Download PwnCTF 2022 Now.ova (5.8GB)](https://drive.google.com/file/d/13qwOhI_6jV4FNnJeoAO0_K5CdZp_qp2J/view?usp=sharing)  

#### Changelog

- May 20, 2022 - Version 2022.0 -- First released  
- May 21, 2022 - Version 2022.1 -- Some improvement  
- May 21, 2022 - Version 2022.2 -- Increase 5 more challenges, a total of 10 challenges  
- Aug 19, 2022 - Version 2022.3 -- Modify the Virtualbox settings for better implementation experience  

#### Demo

[![](https://img.youtube.com/vi/dpziHIbRYXM/0.jpg)](https://youtu.be/dpziHIbRYXM "PwnCTF 2022 Now Demo")  

## Tutorials & Writeups

### Writeups  
- [Nightmare](https://guyinatuxedo.github.io/)  

### Tutorials  
- [pwn.college](https://pwn.college/)  - Basic concept in Videos   
- [CTF pwn tips](https://github.com/Naetw/CTF-pwn-tips)  
- [CTF Wiki](https://ctf-wiki.org/)  - Chinese  

## Books

- ```从 0 到 1 - CTFer 成长之路``` -- [Nu1L 战队]( https://www.nu1l.com/#/) 编著  (ISBN 978-7-121-37695-5)  
- ```CTF 竞赛权威指南 - Pwn 篇``` -- 杨超 编著  (ISBN 978-7-121-39952-7)  

## Bonus

Challenge : gets_only (Linux binary)  
Description : Oh! Only gets() in the binary!  
File : [gets_only](https://github.com/samiux/samiux.github.io/raw/master/binary/gets_only)  
sha256 : 65075f0f30bbd5561ca80aa57c645c7b31af4b49b6f8764575fca4b44989cb1c
Author : Samiux  
Date : August 21, 2022  

### Demo

[![](https://img.youtube.com/vi/cUEkw6Y9Zzw/0.jpg)](https://youtu.be/cUEkw6Y9Zzw "PwnCTF gets_only Demo")  
