void joystickControl()
{
	//int v, v2, h, h2;
	//float a, b;

	while(true)
	{
		if (vexRT[Btn5U]) startLaunch();
		if (vexRT[Btn5D]) stopLaunch();

		if (vexRT[Btn6U]) flick();
		if (vexRT[Btn6D]) changeLaunch();
		if (vexRT[Btn7U]) startFeeder();
		if (vexRT[Btn7D]) stopFeeder();
		if (vexRT[Btn7R]) invertFeeder();

		if (vexRT[Btn8U]) startLifter();
		if (vexRT[Btn8D]) stopLifter();
		if (vexRT[Btn8R]) invertLifter();

		// Genius code by Daniel
		// Blame him when it breaks
		/*
		v = vexRT[Ch4];
		h = vexRT[Ch3];

		a = atan2(v,h);
		b = sqrt(pow(v,2)+pow(h,2));

		a = a - PI/4;

		v2 = v2*b;
		h2 = h2*b;

		rightMotors(h2);
		leftMotors(v2);
		*/
		rightMotors(vexRT[Ch2]);
		leftMotors(vexRT[Ch3]);
	}
}
