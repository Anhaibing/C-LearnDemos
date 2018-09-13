#include "File.h"

void fileRW () {
	char data[100];

	//open a file in write mode and write data into file
	ofstream outfile;
	outfile.open ("afile.dat");

	cout << "enter your name and will save into file" << endl;
	cin.getline (data, 100);

	outfile << data << endl;

	outfile.close ();
}
