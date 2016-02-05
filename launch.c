// Launcher Speeds
#define PRELSPD 85
#define CLOSELSPD 40
// Flicker speeds
#define FUP 100
#define FDOWN -5
// Milliseconds between launch
#define LDEL 6000

// Current Launcher speed setting
int LSPD = PRELSPD;

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

void changeLaunch()
{
	if (LSPD == PRELSPD) LSPD = CLOSELSPD;
	else if (LSPD == CLOSELSPD) LSPD = PRELSPD;
	startLaunch();
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
	delay(LDEL);
	for(;;)
	{
		flick();
		delay(LDEL);
	}
}
