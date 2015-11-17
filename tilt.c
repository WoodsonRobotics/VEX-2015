// Tilting Motors
#define TL 4
#define TR 5

void tilt(int speed, int sec)
{
	run2Motors(TL,TR,speed,sec);
}
