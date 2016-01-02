#pragma platform(VEX)

// Timing for Competitions
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

// UNCOMMENT NEXT TWO LINES FOR COMPETITIONS
//#pragma competitionControl(Competition)
//#include "Vex_Competition_Includes.c"

// Hacky dependency control
// Expect this to break at some point
#include "motorControl.c"
#include "rotate.c"
#include "tilt.c"
#include "launch.c"
#include "remoteControl.c"
//#include "battery.c"

task main()
{
	startLaunch();
	while(1){}
}

void pre_auton()
{}

task autonomous()
{
	startLaunch();
	while(1){}
}
task usercontrol()
{
	joystickControl();
}
