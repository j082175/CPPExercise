#include "Test13_1.h"

 Test13_1_1::Point::Point(const int& x, const int& y)
	:xpos(x),
	ypos(y)
{
}

 void Test13_1_1::Point::ShowPosition() const
{
	std::cout << '[' << xpos << ", " << ypos << ']' << std::endl;
}
