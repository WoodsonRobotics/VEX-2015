// Launcher Motors
#define LL 3
#define LR 4
// Flick Motor
#define FM 6
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
	runMotor(FM,FUP,0.2);
	runMotor(FM,FDOWN,0.1);
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
/*
task launch()
{
	delay(4000);
	for(int i = 0; i < 3;i++)
	{
		flick();
		delay(4000);
	}
}
*/
