#define btn(b) vexRT[b]

void joystickControl()
{
	//int v, v2, h, h2;
	//float a, b;

	while(true)
	{
		if (btn(Btn5U)) startLaunch();
		if (btn(Btn5D)) stopLaunch();

		if (btn(Btn6U)) flick();

		if (btn(btn7U)) startFeeder();
		if (btn(Btn7D)) stopFeeder();
		if (btn(Btn7R)) invertFeeder();

		if (btn(Btn8U)) startLifter();
		if (btn(Btn8D)) stopLifter();
		if (btn(Btn8R)) invertLifter();
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
