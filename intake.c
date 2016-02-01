// Intake motors

// Feeder Speed
#define FSPD 100

// Lifter Speed
#define LTSPD 100

void feeder(int speed)
{
	motor[FD] = speed;
}

void lifter(int speed)
{
	motor[LT] = speed;
}
