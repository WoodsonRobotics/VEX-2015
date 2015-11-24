bool ButtonPressed(TVexJoysticks bt)
{
	if(vexRT[bt] == 1) return true;
	else return false;
}

void joystickControl()
{
	while(1)
	{
		motor[TL] = vexRT[Ch2];
		motor[TR] = vexRT[Ch3];
		if(ButtonPressed(Btn5U)) launch();
	}
}
