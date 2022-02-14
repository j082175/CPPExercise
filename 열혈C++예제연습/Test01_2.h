// 함수 오버로딩
#pragma once
#include <iostream>

using namespace std;


namespace Test01_2
{
	class Q1
	{
	public:
		void Print() const;
	private:
		void Swap(int& num1, int& num2);

		void Swap(double& num1, double& num2);

		void Swap(char& num1, char& num2);
	};
}
