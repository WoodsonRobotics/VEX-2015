#pragma platform(VEX)

#pragma competitionControl(Competition)
// Timing for Competitions
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

// Uncomment for competitions
//#include "Vex_Competition_Includes.c"   //Main competition background code...do not modify!

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
	//joystickControl();
	while(1){}
}

void pre_auton() {}

task autonomous()
{
	startLaunch();
	while(1){}
}
task usercontrol()
{
	joystickControl();
}
