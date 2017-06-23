# medog </br>
Basic Code for Mechanic Dog Project

## How to use these code
1.sudo apt-get install wiringPi</br>
2.git clone https://github.com/cpak00/medog</br>
3.include "Servo.h" in your source code</br>
4.use function Init() to get the address of device pca9685</br>
5.use function SetAngle(addr,id,angle) to set the angle of a servo</br>

## Code List
* PCA9685_wiringPi.h
* Servo.h
* ssh2.h
---

## Code Illustration

### PCA9685_wiringPi.h
Function|Argument|Introduction
---|---|---
pca9685_init()|address of the pca9685(default 0x40)|return the description of the device
pca9685_setmk()|address of the device, id of the gpio, pulse length|make the servo turn(by mk but not angle)
---
### Servo.h
Function|Argument|Introduction
---|---|---
Init|address of the pca9685(default 0x40|return address of the device
SetAngle|address of the device, id of the servo, angle|set servo's angle
Calculate|angle|Calculate the pulse length,return pulse length
---

### ssh2.h
* class Ssh2
    * Connect(name, key)

* class Channel
    * Write(str)
    * Read(":",read time)
