#include"Servo.h"
#include<iostream>
#include<sstream>
using namespace std;

int str2int(char* str){
	stringstream ss;
	int result;
	ss<<str;
	ss>>result;
	return result;
}

int main(int argc, char* argv[]){
	int addr = Init();
	int angle = str2int(argv[1]);
	SetAngle(addr,0,angle);
	return 0;
}
