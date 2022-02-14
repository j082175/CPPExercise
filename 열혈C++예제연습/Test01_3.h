#pragma once
#include <iostream>

namespace Test01_3
{
	//overloading Ver.
	class Q1
	{
	public:
		void Print()
		{
			std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
			std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
			std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
		}
	private:
		int BoxVolume(int length, int width = 1, int height = 1)
		{
			return length * width * height;
		}
	};

	class Q2
	{
	public:
		void Print()
		{
			std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
			std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
			std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
		}
	private:
		int BoxVolume(int length)
		{
			return length;
		}

		int BoxVolume(int length, int width)
		{
			return length * width;
		}

		int BoxVolume(int length, int width, int height)
		{
			return length * width * height;
		}
	};
};

