// Intake motors

// Feeder Speed
#define FSPD 100

// Lifter Speed
#define LTSPD 100

void goFeeder()
{
	motor[FD] = FSPD;
}
void stopFeeder()
{
	motor[FD] = 0;
}

void goLifter()
{
	motor[LT] = LTSPD;
}

void stopLifter()
{
	motor[LT] = 0;
}
