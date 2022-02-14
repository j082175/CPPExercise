#include "Test04_2.h"

 void Test04_2::Point::Init(int x, int y)
{
	xpos = x;
	ypos = y;
}

 void Test04_2::Point::ShowPointInfo() const
{
	std::cout << "[" << xpos << ", " << ypos << "]" << std::endl;
}

 const int Test04_2::Point::getX() const
{
	return xpos;
}

 const int Test04_2::Point::getY() const
{
	return ypos;
}

 Test04_2::Circle::Circle(int xpos, int ypos, int radius)
	:radius(radius)
{
	p.Init(xpos, ypos);
}

 const int Test04_2::Circle::getRadius() const
{
	return radius;
}

 void Test04_2::Circle::ShowCircleInfo() const
{
	std::cout << "[" << this->p.getX() << ", " << this->p.getY() << "]" << std::endl;
}

 Test04_2::Ring::~Ring()
{
	delete c1;
	delete c2;
}

 void Test04_2::Ring::Init(int xpos1, int ypos1, int radius1, int xpos2, int ypos2, int radius2)
{
	c1 = new Circle(xpos1, ypos1, radius1);
	c2 = new Circle(xpos2, ypos2, radius2);
}

 void Test04_2::Ring::ShowRingInfo() const
{
	std::cout << "Inner Circle Info..." << std::endl;
	std::cout << "radius: " << c1->getRadius() << std::endl;
	//std::cout << "[" << c1->getPoint().getX() << ", " << c1->getPoint().getY() << "]" << std::endl;
	c1->ShowCircleInfo();

	std::cout << "Outter Circle Info..." << std::endl;
	std::cout << "radius: " << c2->getRadius() << std::endl;
	//std::cout << "[" << c2->getPoint().getX() << ", " << c2->getPoint().getY() << "]" << std::endl;
	c2->ShowCircleInfo();
}
