// 99339Ray
// Autonomous Duration in Competitions
#define AD 15

// UNCOMMENT NEXT LINE FOR COMPETITIONS
// COMMENT OUT MAIN FOR COMPETITIONS
/*
#pragma platform(VEX)
#pragma competitionControl(Competition)
#pragma autonomousDuration(AD)
#pragma userControlDuration(105)
#include "Vex_Competition_Includes.c"
//*/
// Hacky dependency control
// Expect this to break at some point
#include "motorControl.c"
#include "rotate.c"
#include "tilt.c"
#include "launch.c"
#include "remoteControl.c"

void setupMotors()
{
	// Code common to auto and user periods
	startLaunch();
	launchForever()
	//tilt(50,1);
	// Hack to keep the launcher tilted
	//motor[TM] = 2;
	while(1) {}
}

void pre_auton()
{}

task autonomous()
{
	setupMotors();
	delay(AD*1000);
}
task usercontrol()
{
	joystickControl();
}
//task main() { setupMotors(); }
task main() { joystickControl(); }
