#ifndef CLASSANDOBJ_H_
#define CLASSANDOBJ_H_

#include <iostream>
using namespace std;

class Line {
	public:
		int getLength (void);
		Line (int len);
		Line (const Line &obj);
		~Line ();

	private:
		int *ptr;
};

void ClassMemberFunc();

#endif
