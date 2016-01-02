// Hacky dependency control
// Expect this to break at some point
#include "motorControl.c"
#include "rotate.c"
#include "tilt.c"
#include "launch.c"
#include "remoteControl.c"
//#include "battery.c"

task main()
{
	startLaunch();
	while(1){}
}
