bool ButtonPressed(TVexJoysticks bt)
{
	if(vexRT[bt] == 1) return true;
	else return false;
}
bool tl = true;
void toggleLaunch()
{
	if(tl) startLaunch();
	else stopLaunch();
	tl = !tl;
}
void joystickControl()
{
	while(true)
		//( !( ButtonPressed(Btn5U) && ButtonPressed(Btn6D) ) )
	{
		// Rotate/Foward
		motor[RF] = vexRT[Ch3];
		motor[RB] = -vexRT[Ch2];
		if (ButtonPressed(Btn8U)) flick();
		if (ButtonPressed(Btn6U)) startLaunch();
		if (ButtonPressed(Btn6D)) stopLaunch();
	}

	stopRotateClock();
	tilt(0,0);
	stopLaunch();
}
