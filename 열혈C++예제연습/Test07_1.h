#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

//생성자 삽임 연습
namespace Test07_1_1
{
	class Car
	{
	private:
		int gasolineGauge;
	public:
		Car(const int& gauge = 0);

		int GetGasGauge();
	};

	class HybridCar : public Car
	{
	private:
		int electricGauge;
	public:
		HybridCar(const int& gauge = 0);

		int GetElecGauge();
	};

	class HybridWaterCar : public HybridCar
	{
	private:
		int waterGauge;
	public:
		HybridWaterCar(const int& gauge = 0);

		void ShowCurrentGauge();
	};
};

namespace Test07_1_2
{
	class MyFriendInfo
	{
	private:
		char* name;
		int age;
	public:
		MyFriendInfo(const char* iname, const int& age);

		~MyFriendInfo();

		void ShowMyFriendInfo();
	};

	class MyFriendDetailInfo : public MyFriendInfo
	{
	private:
		char* addr;
		char* phone;
	public:
		MyFriendDetailInfo(const char* iAddr, const char* iPhone, const char* iName, const int& age);

		~MyFriendDetailInfo();

		void ShowMyFriendDetailInfo();
	};
}

