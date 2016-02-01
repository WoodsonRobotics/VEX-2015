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
#include "remote.c"
#include "launch.c"
#include "intake.c"

void pre_auton()
{}

task autonomous()
{

}
task usercontrol()
{

	joystickControl();
}

//task main() { startTask(autonomous); }
//task main() { startTask(usercontrol); }
