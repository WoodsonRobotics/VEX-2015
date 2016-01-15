// Launcher Motors
#define LL 3
#define LR 4
// Flick Motor
#define FM 5
// Number of Balls
#define NB 3
#define LSPD 70

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
	runMotor(FM,LSPD,0.1);
	runMotor(FM,-LSPD,0.1);
}
void launch()
{
	for(int i = 0; i < 3;i++)
	{
		flick();
		delay(1000);
	}
}
