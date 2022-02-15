#include "Test07_2.h"

 Test07_2_1::Point::Point(const int& x, const int& y)
	:xpos(x),
	ypos(y)
{}

 int Test07_2_1::Point::area() const
{
	return xpos * ypos;
}

 Test07_2_1::Rectangle::Rectangle(const int& width, const int& height)
{
	p1 = new Point(width, height);
}

 Test07_2_1::Rectangle::~Rectangle()
{
	delete p1;
}

 void Test07_2_1::Rectangle::ShowAreaInfo()
{
	std::cout << "면적: " << p1->area() << std::endl;
}

 Test07_2_1::Square::Square(const int& num)
	:Rectangle(num, num)
{}

  Test07_2_2::Book::Book(const char* iTitle, const char* iIsbn, const int& price)
	 : price(price)
 {
	 title = new char[strlen(iTitle) + 1];
	 isbn = new char[strlen(iIsbn) + 1];

	 strcpy(title, iTitle);
	 strcpy(isbn, iIsbn);
 }

  Test07_2_2::Book::~Book()
 {
	 delete[] title;
	 delete[] isbn;
 }

  void Test07_2_2::Book::ShowBookInfo() const
 {
	 std::cout << "제목: " << title << std::endl;
	 std::cout << "ISBN: " << isbn << std::endl;
	 std::cout << "가격: " << price << std::endl;
 }

  Test07_2_2::EBook::EBook(const char* iTitle, const char* iIsbn, const int& price, const char* drm)
	 :Book(iTitle, iIsbn, price)
 {
	 DRMKey = new char[strlen(drm) + 1];

	 strcpy(DRMKey, drm);
 }

  void Test07_2_2::EBook::ShowBookInfo() const
 {
	 Book::ShowBookInfo();
	 std::cout << "인증키: " << DRMKey << std::endl;
 }

  Test07_2_2::EBook::~EBook()
 {
	 delete[] DRMKey;
 }
