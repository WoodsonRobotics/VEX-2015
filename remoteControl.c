bool btnPress(TVexJoysticks bt)
{
	if(vexRT[bt] == 1) return true;
	else return false;
}
void joystickControl()
{
	while(true)
		//( !( ButtonPressed(Btn5U) && ButtonPressed(Btn6D) ) )
	{
		// Rotate/Foward
		motor[RF] = vexRT[Ch3];
		motor[RB] = -vexRT[Ch2];
		if (btnPress(Btn8U)) flick();
		if (btnPress(Btn6U)) startLaunch();
		if (btnPress(Btn6D)) stopLaunch();
	}
}
