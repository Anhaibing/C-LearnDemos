#ifndef INHERT_H_
#define INHERT_H_

#include <iostream>
using namespace std;

//base class
class Shape {
	public:
		void setWidth (int w) {
			width = w;
		}
		void setHeight (int h) {
			height = h;
		}
	protected:
		int width;
		int height;
};

//base class
class PaintCost {
	public:
		int getCost (int area) {
			return area * 70;
		}
};

//sub class multi inhert two base class
class Rectangle: public Shape, public PaintCost {
	public:
		int getArea () {
			return (width * height);
		}
};

int InhertDemo();

#endif
