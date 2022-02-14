#include "Test04_3.h"

 Test04_3::NameCard::NameCard(const char* name, const char* cname, const char* pnum, const int& p)
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

 void Test04_3::NameCard::ShowNameCardInfo()
{
	std::cout << "이름: " << mName << std::endl;
	std::cout << "회사: " << mCompanyName << std::endl;
	std::cout << "전화번호: " << mPhoneNumber << std::endl;
	std::cout << "직급: " << setComp(mPosition) << std::endl;
	std::cout << std::endl;
}

 const char* Test04_3::NameCard::setComp(const int& val)
{
	switch (val)
	{
	case (int)Test04_3::eComp_pos::CLERK:
		return "사원";
		break;
	case (int)Test04_3::eComp_pos::SENIOR:
		return "주임";
		break;
	case (int)Test04_3::eComp_pos::ASSIST:
		return "대리";
		break;
	case (int)Test04_3::eComp_pos::MANAGER:
		return "과장";
		break;
	default:
		break;
	}
}
