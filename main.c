#pragma platform(VEX)

// Timing for Competitions
#define AD 15
#pragma autonomousDuration(AD)
#pragma userControlDuration(105)

// UNCOMMENT NEXT TWO LINES FOR COMPETITIONS
// COMMENT OUT MAIN
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

task main() { startLaunch(); while(1){} }

void pre_auton()
{}

task autonomous()
{
	startLaunch();
	delay(AD*1000);
}
task usercontrol()
{
	startLaunch();
	joystickControl();
}
