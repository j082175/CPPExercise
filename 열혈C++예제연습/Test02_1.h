#pragma once
#include <iostream>
#include <tuple>

namespace Test02_1
{
	class Q1
	{
	public:
		Q1(const int& value = 0);
		void Print();
	private:
		void upper(int& ref)const;

		void changeMark(int& ref)const;

	private:
		int ref;
	};

	class Q3
	{
	public:
		Q3(const int& num1, const int& num2);

		void Print();
	private:
		void swapPointer(int* ptr1, int* ptr2);

	private:
		int num1;
		int num2;
	};
};

