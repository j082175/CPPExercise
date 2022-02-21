#include "Test10_1.h"

 Test10_1::Point::Point(const int& x, const int& y)
	:xpos(x),
	ypos(y)
{}

 void Test10_1::Point::ShowPosition() const
{
	std::cout << '[' << xpos << ", " << ypos << ']' << std::endl;
}

 void Test10_1::Point::changeXpos(const int& x)
{
	xpos = x;
}
