// 99339Ray

// UNCOMMENT NEXT LINE FOR COMPETITIONS
// COMMENT OUT MAIN FOR COMPETITIONS

#pragma platform(VEX)
#pragma competitionControl(Competition)
#pragma autonomousDuration(15)
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

void pre_auton()
{}

task autonomous()
{
	startLaunch();
	launchForever();
}
task usercontrol()
{
	joystickControl();
}
//task main() { startTask(autonomous); }
//task main() { startTask(usercontrol); }
