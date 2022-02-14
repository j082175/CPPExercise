//C++기반의 데이터 입출력
#pragma once

#include <initializer_list>
#include <iostream>
#include <tuple>
#include <string>

namespace Test01_1
{
	class Q1
	{
		int mSum;
		int* mArr;
	public:
		Q1(const std::initializer_list<int>& list);

		~Q1();

		int Print()const;
	};

	class Q2
	{
		std::string mName;
		std::string mPhoneNum;
	public:
		void Print();
	private:
		const std::tuple<std::string, std::string> MakeTuple();
	};

	class Q3
	{
		unsigned short mNum;
	public:
		Q3(const unsigned short& num);

		void Print() const;
	};

	class Q4
	{
		unsigned int mSalary;
		unsigned int mSell;
	public:
		Q4();

		void Print();

	private:
		void Execute();

		const unsigned Calculate(const unsigned& sell) const;
	};
}