#pragma once
#include <iostream>

namespace Test10_2
{
	class Point
	{
	private:
		int xpos, ypos;
	public:
		Point(const int& x = 0, const int& y = 0)
			:xpos(x),
			ypos(y)
		{}

		void ShowPosition()const
		{
			std::cout << '[' << xpos << "," << ypos << ']' << std::endl;
		}

		Point& operator++()
		{
			xpos += 1;
			ypos += 1;
			return *this;
		}

		/*friend Point& operator--(Point& ref)
		{
			ref.xpos--;
			ref.ypos--;
			return ref;
		}*/

		Point& operator--()
		{
			xpos--;
			ypos--;
			return *this;
		}

		Point operator-()
		{
			return Point(-xpos, -ypos);
		}

		const Point operator--(int)
		{
			xpos--;
			ypos--;
			return *this;
		}

		friend Point operator~(const Point& ref)
		{
			
		}

		


	};
};

