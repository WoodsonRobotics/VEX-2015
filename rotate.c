// Rotate Motors
#define RF 1
#define RB 2

void startRotateClock(int speed)
{
	motor[RF] = speed;
	motor[RB] = speed;
}
void stopRotateClock()
{
	motor[RF] = 0;
	motor[RB] = 0;
}
void rotateClock(int speed, float sec)
{
	run2IndMotors(RF,RB,speed,speed,sec);
}
void rotateCounter(int speed, float sec)
{
	run2IndMotors(RF,RB,-speed,-speed,sec);
}
