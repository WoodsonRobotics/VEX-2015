#define BATTERY_MIN 20

task battery()
{
	// light led
	while(1)
	{
		int level = nAvgBatteryLevel;
		if(level < BATTERY_MIN) freakOut();
	}
}

// HOLY CRAP BATTERY IS LOW!!!!!!
void freakOut()
{
	while(1)
	{
		// blink led somehow
	}
}
