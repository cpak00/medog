import Servo

if __name__ == '__main__':
	addr = Servo.init()
	id = 0
	angle = int(input('Enter the angle: '))
	Servo.set_angle(addr, id, angle)
