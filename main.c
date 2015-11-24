// Hacky dependency control
// Expect this to break at some point
#include "motorControl.c"
#include "rotate.c"
#include "tilt.c"
#include "launch.c"
#include "battery.c"
#include "remoteControl.c"

task main()
{
	startTask(battery);
}
