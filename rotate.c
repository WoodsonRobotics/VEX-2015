// Rotate Motors
#define RF 1
#define RB 2

void rotateClock(int speed, float sec)
{
	run2IndMotors(RF,RB,speed,speed,sec);
}
void rotateCounter(int speed, float sec)
{
	run2IndMotors(RF,RB,-speed,-speed,sec);
}
