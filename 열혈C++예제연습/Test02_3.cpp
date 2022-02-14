#include "Test02_3.h"

 void Test02_3::Q1::Print()
{
	Point* p1 = new Point;
	p1->xpos = 10;
	p1->ypos = 20;
	Point* p2 = new Point;
	p2->xpos = 30;
	p2->ypos = 40;
	Point& p3 = pntAdder(*p1, *p2);
	std::cout << p3.xpos << " " << p3.ypos << std::endl;

	delete p1;
	delete p2;
	delete (&p3);
}

 Point& Test02_3::Q1::pntAdder(const Point& p1, const Point& p2)
 {
	 Point* result = new Point;
	 result->xpos = p1.xpos + p2.xpos;
	 result->ypos = p1.ypos + p2.ypos;
	 return *result;
 }


