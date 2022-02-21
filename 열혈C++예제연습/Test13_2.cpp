#include "Test13_2.h"

 Test13_2::Point::Point(const int& x, const int& y)
	:xpos(x),
	ypos(y)
{}

 void Test13_2::Point::SetPos(const int& x, const int& y)
{
	xpos = x;
	ypos = y;
}

 void Test13_2::Point::ShowPosition() const
{
	std::cout << '[' << xpos << ", " << ypos << ']' << std::endl;
}

