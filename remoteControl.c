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
		//motor[TM] = vexRT[Ch2]/3;
		//Rotate
		startRotateClock(vexRT[Ch4]);
		// Forward
		startForward(vexRT[Ch2]);
		if (ButtonPressed(Btn8U))
		{
			startLaunch();
			launch();
			stopLaunch();
		}
	}
	stopRotateClock();
	tilt(0,0);
	stopLaunch();
}
