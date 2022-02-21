#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

namespace Test11_1_1
{
	class Gun
	{
	private:
		int bullet;
	public:
		Gun(const int& bnum);

		void Shot();
	};

	class Police
	{
	private:
		int handcuffs;
		Gun* pistol;
	public:
		Police(const int& bnum, const int& bcuff);

		Police(const Police& p);

		Police& operator=(const Police& p)
		{
			this->handcuffs = p.handcuffs;
			if (p.pistol != nullptr)
			{
				this->pistol = new Gun(*(p.pistol));
			}
			else
			{
				this->pistol = nullptr;
			}
			return *this;
		}


		void PutHandcuff();

		void Shot();

		~Police();
	};
};

namespace Test11_1_2
{
	class Book
	{
	private:
		char* title;
		char* isbn;
		int price;
	public:
		Book(const char* t, const char* i, const int& price);

		~Book();

		Book(const Book& b);

		Book& operator=(const Book& b)
		{
			delete[] title;
			delete[] isbn;

			title = new char[strlen(b.title) + 1];
			isbn = new char[strlen(b.isbn) + 1];
			strcpy(title, b.title);
			strcpy(isbn, b.isbn);
			this->price = b.price;
			return *this;
		}

		virtual void ShowBookInfo();
	};

	class EBook : public Book
	{
	private:
		char* DRMKey;
	public:
		EBook(const char* t, const char* i, const int& price,
			const char* key);

		~EBook();

		EBook(const EBook& eb);

		EBook& operator=(const EBook& eb)
		{
			Book::operator=(eb);
			delete[] DRMKey;
			DRMKey = new char[strlen(eb.DRMKey) + 1];
			strcpy(DRMKey, eb.DRMKey);
			return *this;
		}

		virtual void ShowBookInfo();
	};
}