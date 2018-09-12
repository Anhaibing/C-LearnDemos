#include "TimeShow.h"

int TimeShow () {
	//local time
	time_t now = time(0);
	char * dt = ctime(&now);
	cout << "The local data and time is: " << dt << endl;

	//UTC time
	tm *gmtm = gmtime(&now);
	dt = asctime(gmtm);
	cout << "The UTC data and time is : " << dt << endl;

	return 0;
}


