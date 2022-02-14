#pragma once
#include <iostream>

namespace Test04_2
{
	class Point
	{
	private:
		int xpos;
		int ypos;
	public:
		void Init(int x, int y);

		void ShowPointInfo()const;

		const int getX()const;

		const int getY()const;
	};

	class Circle
	{
	private:
		Point p;
		int radius;
	public:
		Circle(int xpos, int ypos, int radius);

	/*	const Point& getPoint()const
		{
			return p;
		}*/

		const int getRadius()const;

		void ShowCircleInfo()const;
	};

	class Ring
	{
		Circle* c1;
		Circle* c2;
	public:
		~Ring();

		void Init(int xpos1, int ypos1, int radius1, int xpos2, int ypos2, int radius2);

		void ShowRingInfo()const;
	};
};

