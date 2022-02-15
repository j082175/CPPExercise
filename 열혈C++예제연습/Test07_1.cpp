#include "Test07_1.h"

 Test07_1_1::Car::Car(const int& gauge)
	:gasolineGauge(gauge)
{

}

 int Test07_1_1::Car::GetGasGauge()
{
	return gasolineGauge;
}

 Test07_1_1::HybridCar::HybridCar(const int& gauge)
	:electricGauge(gauge),
	Car(gauge)
{}

 int Test07_1_1::HybridCar::GetElecGauge()
{
	return electricGauge;
}

 Test07_1_1::HybridWaterCar::HybridWaterCar(const int& gauge)
	:waterGauge(gauge), HybridCar(gauge)
{}

 void Test07_1_1::HybridWaterCar::ShowCurrentGauge()
{
	std::cout << "잔여 가솔린: " << GetGasGauge() << std::endl;
	std::cout << "잔여 전기량: " << GetElecGauge() << std::endl;
	std::cout << "잔여 워터량: " << waterGauge << std::endl;
}

 Test07_1_2::MyFriendInfo::MyFriendInfo(const char* iname, const int& age)
	:age(age)
{
	name = new char[strlen(iname) + 1];
	strcpy(name, iname);
}

 Test07_1_2::MyFriendInfo::~MyFriendInfo()
{
	delete[] this->name;
}

 void Test07_1_2::MyFriendInfo::ShowMyFriendInfo()
{
	std::cout << "이름: " << name << std::endl;
	std::cout << "나이: " << age << std::endl;
}

 Test07_1_2::MyFriendDetailInfo::MyFriendDetailInfo(const char* iAddr, const char* iPhone, const char* iName, const int& age)
	:MyFriendInfo(iName, age)
{
	addr = new char[strlen(iAddr) + 1];
	phone = new char[strlen(iPhone) + 1];

	strcpy(addr, iAddr);
	strcpy(phone, iPhone);
}

 Test07_1_2::MyFriendDetailInfo::~MyFriendDetailInfo()
{
	delete[] addr;
	delete[] phone;
}

 void Test07_1_2::MyFriendDetailInfo::ShowMyFriendDetailInfo()
{
	ShowMyFriendInfo();
	std::cout << "주소 : " << addr << std::endl;
	std::cout << "전화: " << phone << '\n' << std::endl;
}
