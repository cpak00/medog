#include"PCA9685_wiringPi.h"

//转变角度为脉冲宽度
int Calculate(int angle){
	double rate=angle/180.0;
        int mk=rate*2000+500;
        return mk;
}

//设置id舵机的角度为angle
void SetAngle(int addr,int id,int angle){
	if(angle < 0 || angle > 180){
		return;
	}
	pca9685_setmk(addr,id,Calculate(angle));
	return;
}

//初始化PCA9685地址,返回单片机地址addr
int Init(int uint=0x40){
	int addr = pca9685_init(uint);
	return addr;
}
