#include <iostream>
#include "TimeShow.h"
#include "BasicIO.h"
#include "DataStruct.h"
#include "ClassAndObj.h"
#include "Inhert.h"
#include "File.h"

using namespace std;

int Usage() {
	int choose = 0;
	cout << "Please choose a case for run:\n"
		<< "\tBasicIO:\t 1\n"
		<< "\tTimeShow:\t 2\n"
		<< "\tDataStruct:\t 3\n"
		<< "\tClassAndObj\t 4\n"
		<< "\tInhert\t 5\n"
		<< "\tFile\t 6\n"
		<< endl;
	cin >> choose;
	return choose;
}

int main(int argc, char **argv) {
	switch (Usage()) {
		case 1:
			BasicIO();
			break;
		case 2:
			TimeShow();
			break;
		case 3:
			initBooks();
			break;
		case 4:
			ClassMemberFunc();
			break;
		case 5:
			InhertDemo();
			break;
		case 6:
			fileRW();
			break;
		default:
			cout << "Goodbye...\n" << endl;
	}

	return 0;
}
