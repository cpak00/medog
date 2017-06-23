# medog </br>
Basic Code for Mechanic Dog Project

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
---

### ssh2.h
> class Ssh2
>> Connect(name, key)
---
> class Channel
>> Write(str)
>> Read(":",read time)
