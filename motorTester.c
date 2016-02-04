
task main()
{
	motor[9] = 100;
	delay(500);

	for(int i = 1; i < 11; i++)
	{
		motor[i] = 50;
		delay(1000);
		motor[i] = 0;
	}
}
