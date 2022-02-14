#include "Test05_1.h"

Test05_1::NameCard::NameCard(const char* name, const char* cname, const char* pnum, const int& p)
//:mName(name),mCompanyName(cname),mPhoneNumber(pnum),mPosition(p)
	:mPosition(p)
{
	mName = new char[strlen(name) + 1];
	mCompanyName = new char[strlen(cname) + 1];
	mPhoneNumber = new char[strlen(pnum) + 1];
	strcpy(mName, name);
	strcpy(mCompanyName, cname);
	strcpy(mPhoneNumber, pnum);

}

 Test05_1::NameCard::NameCard(const NameCard& nc)
	:mPosition(nc.mPosition)
{
	delete mName;
	delete mCompanyName;
	delete mPhoneNumber;

	mName = new char[strlen(nc.mName) + 1];
	mCompanyName = new char[strlen(nc.mCompanyName) + 1];
	mPhoneNumber = new char[strlen(nc.mPhoneNumber) + 1];

	strcpy(mName, nc.mName);
	strcpy(mCompanyName, nc.mCompanyName);
	strcpy(mPhoneNumber, nc.mPhoneNumber);
}

void Test05_1::NameCard::ShowNameCardInfo()
{
	std::cout << "이름: " << mName << std::endl;
	std::cout << "회사: " << mCompanyName << std::endl;
	std::cout << "전화번호: " << mPhoneNumber << std::endl;
	std::cout << "직급: " << setComp(mPosition) << std::endl;
	std::cout << std::endl;
}

const char* Test05_1::NameCard::setComp(const int& val)
{
	switch (val)
	{
	case (int)Test05_1::eComp_pos::CLERK:
		return "사원";
		break;
	case (int)Test05_1::eComp_pos::SENIOR:
		return "주임";
		break;
	case (int)Test05_1::eComp_pos::ASSIST:
		return "대리";
		break;
	case (int)Test05_1::eComp_pos::MANAGER:
		return "과장";
		break;
	default:
		break;
	}
}
