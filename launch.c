// Launcher Motors
#define LL 3
#define LR 4
#define LSPD 127

void startLaunch()
{
	motor[LL] = -LSPD;
	motor[LR] = LSPD;
}
void stopLaunch()
{
	motor[LL] = 0;
	motor[LR] = 0;
}
