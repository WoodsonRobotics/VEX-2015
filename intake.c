// Intake motors

// Feeder Speed
#define FSPD 100

// Lifter Speed
#define LTSPD 100

void startFeeder()
{
	motor[FD] = FSPD;
}
void stopFeeder()
{
	motor[FD] = 0;
}

void startLifter()
{
	motor[LT] = LTSPD;
}
void stopLifter()
{
	motor[LT] = 0;
}

void startIntake()
{
	startFeeder();
	startLifter();
}
void stopIntake()
{
	stopFeeder();
	stopLifter();
}
