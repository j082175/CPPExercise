#pragma once
#include <iostream>

namespace Test01_3
{
	//non-overloading Ver.
	class Q1
	{
	public:
		void Print();
	private:
		int BoxVolume(int length, int width = 1, int height = 1);
	};

	//overloading Ver
	class Q2
	{
	public:
		void Print();
	private:
		int BoxVolume(int length);

		int BoxVolume(int length, int width);

		int BoxVolume(int length, int width, int height);
	};
};

