#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>	

namespace Test07_2_1
{
	class Point
	{
		int xpos;
		int ypos;
	public:
		Point(const int& x, const int& y);

		int area()const;
	};

	class Rectangle
	{
		Point* p1;
	public:
		Rectangle(const int& width, const int& height);

		~Rectangle();

		void ShowAreaInfo();

	private:
		
	};

	class Square : public Rectangle
	{
	public:
		Square(const int& num);

	};
};

namespace Test07_2_2
{
	class Book
	{
	private:
		char* title;
		char* isbn;
		int price;
	public:
		Book(const char* iTitle, const char* iIsbn, const int& price);

		~Book();

		virtual void ShowBookInfo()const;
	};

	class EBook : public Book
	{
	private:
		char* DRMKey;
	public:
		EBook(const char* iTitle, const char* iIsbn, const int& price, const char* drm);

		virtual void ShowBookInfo()const;

		~EBook();
	};
}