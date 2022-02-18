#pragma once
#include <iostream>

namespace Test11_2_1
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

		friend std::ostream& operator<<(std::ostream& out, const Point& pos)
		{
			out << '[' << pos.xpos << ", " << pos.ypos << ']' << std::endl;
			return out;
		}

		friend std::ostream& operator<<(std::ostream& out, const Point* pos)
		{
			out << '[' << pos->xpos << "," << pos->ypos << ']' << std::endl;
			return out;
		}
	};

	class BoundCheckPointArray
	{
	private:
		Point* arr;
		int arrlen;
		
		BoundCheckPointArray(const BoundCheckPointArray& arr);
	public:
		//BoundCheckPointArray& operator=(const BoundCheckPointArray& arr)
		//{
		//	this->arr = arr.arr;
		//	arrlen = arr.arrlen;
		//	return *this;
		//}

		BoundCheckPointArray(const int& len)
			:arrlen(len)
		{
			arr = new Point[len];
		}

		Point& operator[](const int& idx)
		{
			if (idx < 0 || idx >= arrlen)
			{
				std::cout << "Array index out of bound exception" << std::endl;
				exit(1);
			}
			return arr[idx];
		}

		const Point operator[](const int& idx)const
		{
			if (idx < 0 || idx >= arrlen)
			{
				std::cout << "Array index out of bound exception" << std::endl;
				exit(1);
			}
			return arr[idx];
		}

		int GetArrLen()const
		{
			return arrlen;
		}

		~BoundCheckPointArray()
		{
			delete[] arr;
		}

	};
};

namespace Test11_2_2
{
	class BoundCheck2DIntArray
	{
		const int mRow;
		const int mColumn;
		int* arr;
	public:
		BoundCheck2DIntArray(const int& row, const int& column)
			:mRow(row),
			mColumn(column)
		{
			static const int a = column;
			//arr = new int[mRow][4];
		}
		BoundCheck2DIntArray& operator[](const int& idx)
		{
			return *this;
		}
	};
}