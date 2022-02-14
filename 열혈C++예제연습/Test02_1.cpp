#include "Test02_1.h"

 Test02_1::Q1::Q1(const int& value)
	:ref(value)
{}

 void Test02_1::Q1::Print()
{
	upper(ref);
	std::cout << "upper : " << ref << std::endl;
	changeMark(ref);
	std::cout << "changeMakr : " << ref << std::endl;
}

 void Test02_1::Q1::upper(int& ref) const
{
	ref++;
}

 void Test02_1::Q1::changeMark(int& ref) const
{
	ref = -ref * 2;
}

 Test02_1::Q3::Q3(const int& num1, const int& num2)
	:num1(num1),
	num2(num2)
{}

 void Test02_1::Q3::Print()
{
	int numOne = num1;
	int numTwo = num2;
	std::cout << numOne << " " << numTwo << std::endl;
	swapPointer(&numOne, &numTwo);
	std::cout << numOne << " " << numTwo << std::endl;
}

 void Test02_1::Q3::swapPointer(int* ptr1, int* ptr2)
{
	int data = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = data;
}
