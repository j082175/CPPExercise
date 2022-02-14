#include "Test01_3.h"

 void Test01_3::Q1::Print()
{
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
}

 int Test01_3::Q1::BoxVolume(int length, int width, int height)
{
	return length * width * height;
}

 void Test01_3::Q2::Print()
{
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
}

 int Test01_3::Q2::BoxVolume(int length)
{
	return length;
}

 int Test01_3::Q2::BoxVolume(int length, int width)
{
	return length * width;
}

 int Test01_3::Q2::BoxVolume(int length, int width, int height)
{
	return length * width * height;
}
