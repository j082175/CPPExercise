#pragma once
#include <iostream>
namespace Test03_2
{
	class Q1
	{
	public:

		void Print();
	private:
		template<typename T>
		T add(const T& val1, const T& val2);

		template<typename T>
		T div(const T& val1, const T& val2);

		template<typename T>
		T min(const T& val1, const T& val2);

		template<typename T>
		T mul(const T& val1, const T& val2);

		void showOpCount();
	private:
		struct
		{
			unsigned int addCount;
			unsigned int divCount;
			unsigned int minCount;
			unsigned int mulCount;
		};
	};
	template<typename T>
	 T Q1::add(const T& val1, const T& val2)
	{
		addCount++;
		return val1 + val2;
	}
	template<typename T>
	 T Q1::div(const T& val1, const T& val2)
	{
		divCount++;
		return val1 / val2;
	}
	template<typename T>
	 T Q1::min(const T& val1, const T& val2)
	{
		minCount++;
		return val1 - val2;
	}
	template<typename T>
	 T Q1::mul(const T& val1, const T& val2)
	{
		mulCount++;
		return val1 * val2;
	}

	 class Q2_Printer
	 {
	 public:
		 void Print()
		 {
			 setString("Hello world!");
			 showString();

			 setString("I love C++");
			 showString();
		 }
	 private:
		 void setString(const char* source)
		 {
			 strcpy_s(str, sizeof(str), source);
		 }

		 void showString()
		 {
			 printf("%s\n", str);
		 }
	 private:
		 char str[20];
	};
};

