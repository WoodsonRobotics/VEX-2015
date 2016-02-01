// Launcher Speed
#define LSPD 70
// Flicker speeds
#define FUP 100
#define FDOWN -5

void startLaunch()
{
	motor[LL] = LSPD;
	motor[LR] = -LSPD;
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
	motor[FM] = 0;
	motor[FM] = FDOWN;
	delay(100);
	motor[FM] = 0;
}
void launchForever()
{
	delay(4000);
	for(;;)
	{
		flick();
		delay(4000);
	}
}
