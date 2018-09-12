#include "ClassAndObj.h"

//constructor: alloc memory
Line::Line (int len) {
		 cout << "Normal constructor allocating ptr" << endl;
		 ptr = new int;
		 *ptr = len;
}

Line::Line (const Line &obj) {
		 cout << "Copy constructor allocating ptr" << endl;
		 ptr = new int;
		 *ptr = *obj.ptr;
}

Line::~Line (void) {
	cout << "destructor free memory" << endl;
	delete ptr;
}

int Line::getLength (void) {
	return *ptr;
}

void display (Line obj) {
	cout << "Length of line" << obj.getLength()<< endl;
}

void ClassMemberFunc () {
	Line line(10);
	display (line);
	Line line1 = line;
	display (line1);
}
