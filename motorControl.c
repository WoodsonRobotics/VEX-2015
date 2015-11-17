#pragma config(StandardModel, "RVW CLAWBOT")
#include "motorControl.h"
// motor is a reserved word so mtr instead

void runMotor(int mtr, int speed, float seconds)
{
	writeDebugStreamLine("Motor %d at %d speed for %g seconds",mtr,speed,seconds);
	motor[mtr] = speed;
	delay(seconds*1000);
	motor[mtr] = 0;
}
