#include "Test03_1.h"
#include <iostream>

 Test03_1::Point::Point(const int& x, const int& y)
	:xpos(x),
	ypos(y)
{}

 void Test03_1::Point::Print()
{
	Point pos1 = { 12,4 };
	Point pos2 = { 20,30 };

	pos1.movePos(-7, 10);
	pos1.showPosition();

	pos1.addPoint(pos2);
	pos1.showPosition();
}

 void Test03_1::Point::movePos(int x, int y)
{
	this->xpos += x;
	this->ypos += y;
}

 void Test03_1::Point::addPoint(const Point& pos)
{
	this->xpos += pos.xpos;
	this->ypos += pos.ypos;
}

 void Test03_1::Point::showPosition()
{
	std::cout << "[" << xpos << ", " << ypos << "]" << std::endl;
}
