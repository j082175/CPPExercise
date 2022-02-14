#pragma once

namespace Test03_1
{
	struct Point
	{
	private:
		int xpos;
		int ypos;
	public:
		Point(const int& x = 0, const int& y = 0);

		void Print();
	private:
		void movePos(int x, int y);

		void addPoint(const Point& pos);

		void showPosition();
	};
};

