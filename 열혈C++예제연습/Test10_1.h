#pragma once
#include <iostream>

namespace Test10_1
{
	class Point
	{
	private:
		int xpos, ypos;
	public:
		Point(const int& x = 0, const int& y = 0);

		void ShowPosition()const;

		void changeXpos(const int& x);

		friend Point operator+(const Point& pos1, const Point& pos2)
		{
			Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
			return pos;
		}

		friend Point operator-(const Point& pos1, const Point& pos2)
		{
			return Point(pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos);
		}

		const Point& operator+=(const Point& pos)
		{
			this->xpos += pos.xpos;
			this->ypos += pos.ypos;
			return *this;
		}

		const Point& operator-=(const Point& pos)
		{
			this->xpos -= pos.xpos;
			this->ypos -= pos.ypos;
			return *this;
		}

		bool operator==(const Point& pos)
		{
			bool x = this->xpos == pos.xpos;
			bool y = this->ypos == pos.ypos;
			return (x && y);
		}

		bool operator!=(const Point& pos)
		{
			bool result = operator==(pos);
			return (!result);
		}
	};
};

