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
#include "launch.c"
#include "intake.c"
#include "remote.c"

void pre_auton()
{}

task autonomous()
{
	startLaunch();
	flickPrel();
	startIntake();
	move(100);
	delay(1000);
	move(0);
}
task usercontrol()
{
	startIntake();
	joystickControl();
}

task main() { startTask(autonomous); }
//task main() { startTask(usercontrol); }
