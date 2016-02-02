// Launcher Speed
#define LSPD 70
// Flicker speeds
#define FUP 100
#define FDOWN -5
// Number of Preloads
#define PREL 4
// Milliseconds between launch
#define LDEL 3000
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
	motor[FM] = FDOWN;
	delay(100);
	motor[FM] = 0;
}
void flickPrel()
{
	delay(LDEL);
	for(int i = 0;i < PREL;i++)
	{
		flick();
		delay(LDEL);
	}
}
