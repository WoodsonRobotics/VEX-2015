bool ButtonPressed(TVexJoysticks bt)
{
	if(vexRT[bt] == 1) return true;
	else return false;
}

void joystickControl()
{
	while(true)
		//( !( ButtonPressed(Btn5U) && ButtonPressed(Btn6D) ) )
	{
		// Tilt
		motor[TM] = vexRT[Ch2]/3;
		//Rotate
		startRotateClock(vexRT[Ch4]/3);
		// Forward
		startForward(vexRT[ch3]);
	}
	stopRotateClock();
	tilt(0,0);
	stopLaunch();
}
