#include "Inhert.h"

int InhertDemo() {
	Rectangle Rect;
	int area;

	Rect.setWidth (5);
	Rect.setHeight (7);

	area = Rect.getArea ();
	cout << "Total area: " << Rect.getArea() << endl;

	cout << "Total paint cost: " <<Rect.getCost (area) << endl;
	return 0;
}
