#pragma once
#include <iostream>

typedef struct __Point
{
public:
	int xpos;
	int ypos;
}Point;

namespace Test02_3
{

	class Q1
	{
	public:
		void Print();
	private:
		Point& pntAdder(const Point& p1, const Point& p2);
	};
};



