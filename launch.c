// Launcher Speeds
#define FAST 65
#define SLOW 40
// Flicker speeds
#define FUP 100
#define FDOWN -5
// Milliseconds between launch
#define LDEL 4000

void fastLaunch()
{
	motor[LL] = FAST;
	motor[LR] = -FAST;
}

void slowLaunch()
{
	motor[LL] = SLOW;
	motor[LR] = -SLOW;
}

void stopLaunch()
{
	motor[LL] = 0;
	motor[LR] = 0;
}

void flick()
{
	// Flick the projectiles into the launcher
	motor[FM] = FUP;
	delay(200);
	motor[FM] = FDOWN;
	delay(100);
	motor[FM] = 0;
}
void flickPre()
{
	for(;;)
	{
		delay(LDEL);
		flick();
	}
}
