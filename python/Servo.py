#! /usr/bin/python
import Adafruit_PCA9685 as pca


def angle_map(angle):
    mk = int(4096.0 * ((angle * 11.0) + 500.0) / (20000.0) + 0.5)
    return mk


def init(addr=0x40):
    '''the device description of PCA9685'''
    addr = pca.PCA9685(addr)
    addr.set_pwm_freq(50)
    return addr


def set_angle(addr, id, angle):
    mk = angle_map(angle)
    addr.set_pwm(id, 0, mk)
