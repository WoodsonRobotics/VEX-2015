bool ButtonPressed(TVexJoysticks bt)
{
	if(vexRT[bt] == 1) return true;
	else return false;
}

void joystickControl()
{
	while( !( ButtonPressed(Btn5U) && ButtonPressed(Btn6D) ) )
	{
		// Tilt
		motor[TM] = vexRT[Ch2];
		//Rotate
		startRotateClock(vexRT[Ch4]/3);
	}
	stopRotateClock();
	tilt(0,0);
	stopLaunch();
}
