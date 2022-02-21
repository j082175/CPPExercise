#include "Test11_1.h"

 Test11_1_1::Gun::Gun(const int& bnum)
	:bullet(bnum)
{}

 void Test11_1_1::Gun::Shot()
{
	std::cout << "BBANG!" << std::endl;
	bullet--;
}

 Test11_1_1::Police::Police(const int& bnum, const int& bcuff)
	:handcuffs(bcuff)
{
	if (bnum > 0)
	{
		pistol = new Gun(bnum);
	}
	else
	{
		pistol = nullptr;
	}
}

 Test11_1_1::Police::Police(const Police& p)
	:handcuffs(p.handcuffs)
{
	if (p.pistol != nullptr)
	{
		this->pistol = new Gun(*(p.pistol));
	}
	else
	{
		this->pistol = nullptr;
	}
}

 void Test11_1_1::Police::PutHandcuff()
{
	std::cout << "SNAP!" << std::endl;
	handcuffs--;
}

 void Test11_1_1::Police::Shot()
{
	if (pistol == nullptr)
	{
		std::cout << "Hut BBANG!" << std::endl;
	}
	else
	{
		pistol->Shot();
	}
}

 Test11_1_1::Police::~Police()
{
	if (pistol == nullptr)
	{
		delete pistol;
	}
}

 Test11_1_2::Book::Book(const char* t, const char* i, const int& price)
	:price(price)
{
	title = new char[strlen(t) + 1];
	isbn = new char[strlen(i) + 1];

	strcpy(title, t);
	strcpy(isbn, i);
}

 Test11_1_2::Book::~Book()
{
	delete[] title;
	delete[] isbn;
}

 Test11_1_2::Book::Book(const Book& b)
	:price(b.price)
{
	title = new char[strlen(b.title) + 1];
	isbn = new char[strlen(b.isbn) + 1];
	strcpy(title, b.title);
	strcpy(isbn, b.isbn);
}

 void Test11_1_2::Book::ShowBookInfo()
{
	std::cout << title << " " << isbn << " " <<
		price << " ";
}

 Test11_1_2::EBook::EBook(const char* t, const char* i, const int& price, const char* key)
	:Book(t, i, price)
{
	DRMKey = new char[strlen(key) + 1];
	strcpy(DRMKey, key);
}

 Test11_1_2::EBook::~EBook()
{
	delete[] DRMKey;
}

 Test11_1_2::EBook::EBook(const EBook& eb)
	:Book(eb)
{
	DRMKey = new char[strlen(eb.DRMKey) + 1];
	strcpy(DRMKey, eb.DRMKey);
}

 void Test11_1_2::EBook::ShowBookInfo()
{
	Book::ShowBookInfo();
	std::cout << DRMKey << " ";
}
