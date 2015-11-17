// Functions for motor control

// Drive Motors
#define DL 0
#define DR 1

// Launcher Motors
#define LL 2
#define LR 3

void runMotor(int mtr, int speed, float seconds)
{
	writeDebugStreamLine("Motor %d at %d speed for %g seconds",mtr,speed,seconds);
	motor[mtr] = speed;
	delay(seconds*1000);
	motor[mtr] = 0;
}
