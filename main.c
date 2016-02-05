// 99339Ray

// UNCOMMENT NEXT LINE FOR COMPETITIONS
// COMMENT OUT MAIN FOR COMPETITIONS
/*
#pragma platform(VEX)
#pragma competitionControl(Competition)
#pragma autonomousDuration(15)
#pragma userControlDuration(105)
#include "Vex_Competition_Includes.c"
//*/

// Hacky dependency control
// Expect this to break at some point
#include "motor.c"
#include "move.c"
#include "intake.c"
#include "launch.c"
#include "remote.c"

void pre_auton()
{}

void auto()
{
	startLaunch();
	flickPre();
}
task autonomous() { auto(); }

void user()
{
	startIntake();
	joystickControl();
}
task usercontrol() { user(); }

//task main() { auto(); }
//task main() { user(); }
