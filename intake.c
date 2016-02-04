// Intake motors

// Feeder Speed
int FSPD = 100;

// Lifter Speed
int LTSPD = -100;

void startFeeder()
{
	motor[FD] = FSPD;
}
void stopFeeder()
{
	motor[FD] = 0;
}
void invertFeeder()
{
	FSPD = -FSPD;
	startFeeder();
}
void startLifter()
{
	motor[LT] = LTSPD;
}
void stopLifter()
{
	motor[LT] = 0;
}
void invertLifter()
{
	LTSPD = -LTSPD;
	startLifter();
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
