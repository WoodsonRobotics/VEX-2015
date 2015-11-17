// Rotate Motors
#define RF 0
#define RB 1

void rotateClock(int speed, float sec)
{
	run2IndMotors(RF,RB,speed,-speed,sec);
}
void rotateCounter(int speed, float sec)
{
	run2IndMotors(RF,RB,-speed,speed,sec);
}
