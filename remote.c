bool btn(TVexJoysticks bt)
{
	if(vexRT[bt] == 1) return true;
	else return false;
}
void joystickControl()
{

	int v, v2, h, h2;
	float a, b;

	while(true)
	{
		if (btn(Btn5U)) startLaunch();
		if (btn(Btn5D)) stopLaunch();
		if (btn(Btn6U)) startFeeder();
		if (btn(Btn6D)) stopFeeder();
		if (btn(Btn8R)) flick();
		if (btn(Btn8U)) invertFeeder();
		if (btn(Btn8L)) invertLifter();

		// Genius code by Daniel
		// Blame him when it breaks
		v = motor[Ch4];
		h = motor[Ch3];

		a = atan2(v,h);
		b = sqrt(pow(v,2)+pow(h,2));

		a = a - PI/4;

		v2 = v2*b;
		h2 = h2*b;

		rightMotors(h2);
		leftMotors(v2);
	}
}
