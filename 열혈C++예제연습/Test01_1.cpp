#include "Test01_1.h"

 Test01_1::Q1::Q1(const std::initializer_list<int>& list)
	:mSum(0)
{
	mArr = new int[5];

	for (auto& element : list)
	{
		int count = 0;
		mArr[count] = element;
		mSum += element;
		count++;
	}
}

 Test01_1::Q1::~Q1()
{
	delete[] mArr;
}

 int Test01_1::Q1::Print() const
{
	return mSum;
}

 Test01_1::Q3::Q3(const unsigned short& num)
	:mNum(num)
{}

 void Test01_1::Q3::Print() const
{
	for (unsigned short i = 1; i < 10; i++)
	{
		std::cout << mNum * i << " ";
	}
	std::cout << std::endl;
}

 void Test01_1::Q2::Print()
{
	//Variation One => Only C++17
	/*auto [a, b] = MakeTuple();
	std::cout << a << " " << b << std::endl;*/

	//Variation Two
	/*std::string a, b;
	std::tie(a, b) = MakeTuple();
	std::cout << a << " " << b << std::endl;*/

	//Variation Three
	auto t = MakeTuple();
	std::cout << std::get<0>(t) << " " << std::get<1>(t) << std::endl;
}

 const std::tuple<std::string, std::string> Test01_1::Q2::MakeTuple()
{
	std::cout << "문자열을 입력하시오: ";
	std::cin >> mName >> mPhoneNum;
	return std::make_tuple(mName, mPhoneNum);
}

 Test01_1::Q4::Q4()
	:mSalary(0),
	mSell(0)
{}

 void Test01_1::Q4::Print()
{
	Execute();
}

 void Test01_1::Q4::Execute()
{
	while (mSell != -1)
	{
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> mSell;
		std::cout << std::endl;
		mSalary = Calculate(mSell);
		if (mSell != -1)
		{
			std::cout << "이번 달 급여: " << mSalary << "만원" << std::endl;
		}
	}
}

 const unsigned Test01_1::Q4::Calculate(const unsigned& sell) const
{
	unsigned result = (50 + sell * 0.12f);
	return result;
}
