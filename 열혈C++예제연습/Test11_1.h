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
		Gun(const int& bnum)
			:bullet(bnum)
		{}

		void Shot()
		{
			std::cout << "BBANG!" << std::endl;
			bullet--;
		}
	};

	class Police
	{
	private:
		int handcuffs;
		Gun* pistol;
	public:
		Police(const int& bnum, const int& bcuff)
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

		Police(const Police& p)
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


		void PutHandcuff()
		{
			std::cout << "SNAP!" << std::endl;
			handcuffs--;
		}

		void Shot()
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

		~Police()
		{
			if (pistol == nullptr)
			{
				delete pistol;
			}
		}
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
		Book(const char* t, const char* i, const int& price)
			:price(price)
		{
			title = new char[strlen(t) + 1];
			isbn = new char[strlen(i) + 1];

			strcpy(title, t);
			strcpy(isbn, i);
		}

		~Book()
		{
			delete[] title;
			delete[] isbn;
		}

		Book(const Book& b)
			:price(b.price)
		{
			title = new char[strlen(b.title) + 1];
			isbn = new char[strlen(b.isbn) + 1];
			strcpy(title, b.title);
			strcpy(isbn, b.isbn);
		}

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

		virtual void ShowBookInfo()
		{
			std::cout << title << " " << isbn << " " <<
				price << " ";
		}
	};

	class EBook : public Book
	{
	private:
		char* DRMKey;
	public:
		EBook(const char* t, const char* i, const int& price,
			const char* key)
			:Book(t, i, price)
		{
			DRMKey = new char[strlen(key) + 1];
			strcpy(DRMKey, key);
		}

		~EBook()
		{
			delete[] DRMKey;
		}

		EBook(const EBook& eb)
			:Book(eb)
		{
			DRMKey = new char[strlen(eb.DRMKey) + 1];
			strcpy(DRMKey, eb.DRMKey);
		}

		EBook& operator=(const EBook& eb)
		{
			Book::operator=(eb);
			delete[] DRMKey;
			DRMKey = new char[strlen(eb.DRMKey) + 1];
			strcpy(DRMKey, eb.DRMKey);
			return *this;
		}

		virtual void ShowBookInfo()
		{
			Book::ShowBookInfo();
			std::cout << DRMKey << " ";
		}
	};
}