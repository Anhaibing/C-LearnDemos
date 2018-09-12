#include "BasicIO.h"

int BasicIO () {
	char strCerr[] = "Cerr used for show error msg...";
	char strClog[] = "Clog used for show log msg.........";

	cerr << "Error messags: " << strCerr << endl;
	clog << "Log message: " << strClog << endl;

	cout << "This is for show print" << endl;
}


