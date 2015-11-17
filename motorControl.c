// Functions for motor control

// Run one motor
void runMotor(int mtr, int speed, float sec)
{
	motor[mtr] = speed;
	delay(sec*1000);
	motor[mtr] = 0;
}
// Run two motors independently
void run2IndMotors(int mtr1, int mtr2, int speed1, int speed2, float sec)
{
	motor[mtr1] = speed1;
	motor[mtr2] = speed2;
	delay(sec*1000);
	motor[mtr1] = 0;
	motor[mtr2] = 0;
}
// Run two motors at the same speed
void run2Motors(int mtr1, int mtr2, int speed, float sec)
{
	run2IndMotors(mtr1,mtr2,speed,speed,sec);
}
