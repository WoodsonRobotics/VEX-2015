bool ButtonPressed(TVexJoysticks bt)
{
	if(vexRT[bt] == 1) return true;
	else return false;
}

void killEverything()
{
	if(ButtonPressed(Btn5U) && ButtonPressed(Btn6D)) stopAllTasks();
}
void joystickControl()
{
	while(1)
	{
		killEverything();
		motor[TM] = vexRT[Ch1];
		if(ButtonPressed(Btn6U))
		{
			startLaunch();
			while(ButtonPressed(Btn6U))
			{
				delay(10);
			}
			stopLaunch();
		}
	}
}
