#pragma once
#include <iostream>
#include <tuple>

namespace Test02_1
{
	class Q1
	{
	public:
		Q1(const int& value = 0)
			:ref(value)
		{}
		void Print()
		{
			upper(ref);
			std::cout << "upper : " << ref << std::endl;
			changeMark(ref);
			std::cout << "changeMakr : " << ref << std::endl;
		}
	private:
		void upper(int& ref)const
		{
			ref++;
		}

		void changeMark(int& ref)const
		{
			ref =- ref * 2;
		}

	private:
		int ref;
	};

	class Q3
	{
	public:
		Q3(const int& num1, const int& num2)
			:num1(num1),
			num2(num2)
		{}

		void Print()
		{
			int numOne = num1;
			int numTwo = num2;
			std::cout << numOne << " " << numTwo << std::endl;
			swapPointer(&numOne, &numTwo);
			std::cout << numOne << " " << numTwo << std::endl;
		}
	private:
		void swapPointer(int* ptr1, int* ptr2)
		{
			int data = *ptr1;
			*ptr1 = *ptr2;
			*ptr2 = data;
		}

	private:
		int num1;
		int num2;
	};
};

