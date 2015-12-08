bool ButtonPressed(TVexJoysticks bt)
{
	if(vexRT[bt] == 1) return true;
	else return false;
}

void joystickControl()
{
	startRotateClock();
	while(1)
	{
		// Kill everything command
		if(ButtonPressed(Btn5U) && ButtonPressed(Btn6D)) stopAllTasks();
		// Tilt
		motor[TM] = vexRT[Ch2];
		//Rotate
		startRotateClock(vexRT[Ch4]);
		while (vexRT[Ch4] != 0) delay(100);
		stopRotateClock();
	}
	stopRotateClock();
}
