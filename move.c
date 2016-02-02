// Movement Motors
void rightMotors(int speed)
{
	motor[RF] = speed;
	motor[RB] = speed;
}

void leftMotors(int speed)
{
	motor[LF] = speed;
	motor[LB] = speed;
}

void move(int speed)
{
	rightMotors(speed);
	leftMotors(speed);
}
