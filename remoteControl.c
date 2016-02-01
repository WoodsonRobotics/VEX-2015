bool btnPress(TVexJoysticks bt)
{
	if(vexRT[bt] == 1) return true;
	else return false;
}
void joystickControl()
{
	// Genius code by Daniel
	// Blame him when it breaks
	int v, v2, h, h2;
	double a, b;

	while(true)
	{
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
