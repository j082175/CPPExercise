#include "Test11_2.h"
#pragma warning(disable:26495)

 Test11_2_1::Point::Point(const int& x, const int& y)
	:xpos(x),
	ypos(y)
{}

 Test11_2_1::BoundCheckPointArray::BoundCheckPointArray(const int& len)
	: arrlen(len)
{
	arr = new Point[len];
}

 int Test11_2_1::BoundCheckPointArray::GetArrLen() const
{
	return arrlen;
}

 Test11_2_1::BoundCheckPointArray::~BoundCheckPointArray()
{
	delete[] arr;
}

 Test11_2_2::BoundCheck2DIntArray::BoundCheck2DIntArray(const int& row, const int& column)
	:mRow(row),
	mColumn(column)
{
	static const int a = column;
	//arr = new int[mRow][4];
}
