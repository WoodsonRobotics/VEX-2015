// Tilting Motors
#define TM 5
// Positive aims upwards
void tilt(int speed, int sec)
{
	runMotor(TM,speed,sec);
}
