// Rotate Motors
#define RF 0
#define RB 1


void rotateClock(int speed, float sec)
{
	motor[RF] = speed;
	motor[RB] = -speed;
	delay(sec*1000);
}
void rotateCounter(float msec)
{

}
