#include "Test10_2.h"

 Test10_2::Point::Point(const int& x, const int& y)
	:xpos(x),
	ypos(y)
{}

 void Test10_2::Point::ShowPosition() const
{
	std::cout << '[' << xpos << "," << ypos << ']' << std::endl;
}
