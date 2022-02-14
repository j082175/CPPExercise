#include "Test01_2.h"

 void Test01_2::Q1::Swap(int& num1, int& num2)
{
	int data = num1;
	num1 = num2;
	num2 = data;
}

 void Test01_2::Q1::Swap(double& num1, double& num2)
{
	double data = num1;
	num1 = num2;
	num2 = data;
}

 void Test01_2::Q1::Swap(char& num1, char& num2)
{
	char data = num1;
	num1 = num2;
	num2 = data;
}

 void Test01_2::Q1::Print() const
{
	int a = 20, b = 30;
	char ch1 = 'A', ch2 = 'Z';
	double db1 = 1.111, db2 = 5.555;
	std::cout << a << " " << b << std::endl;
	Q1().Swap(a, b);
	cout << a << " " << b << endl;

	std::cout << ch1 << " " << ch2 << std::endl;
	Q1().Swap(ch1, ch2);
	cout << ch1 << " " << ch2 << endl;

	std::cout << db1 << " " << db2 << std::endl;
	Q1().Swap(db1, db2);
	cout << db1 << " " << db2 << endl;
}
