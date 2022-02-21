#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

namespace Test08_1
{
	enum class eRISK_LEVEL
	{
		RISK_A = 3,
		RISK_B = 2,
		RISK_C = 1
	};

	class Employee
	{
	private:
		char* mName;
	public:
		Employee(const char* name);

		void ShowYourName()const;

		virtual int GetPay()const = 0;

		virtual void ShowSalaryInfo()const = 0;
	};

	class PermanentWorker : public Employee
	{
	private:
		int salary;
	public:
		PermanentWorker(const char* name, const int& money);

		int GetPay()const;

		void ShowSalaryInfo()const;
	};

	class TemporaryWorker : public Employee
	{
		int workTime;
		int payPerHour;
	public:
		TemporaryWorker(const char* name, const int& money);

		void AddWorkTime(const int& time);

		int GetPay()const;

		void ShowSalaryInfo()const;


	};

	class SalesWorker : public PermanentWorker
	{
		int salesResult;
		double bonusRatio;
	public:
		SalesWorker(const char* name, const int& money, const double& ratio);

		void AddSalesResult(const int& value);

		int GetPay()const;

		void ShowSalaryInfo()const;
	};

	class ForeignSalesWorker : public SalesWorker
	{
	private:
		eRISK_LEVEL mRiskPay;
	public:
		ForeignSalesWorker(const char* name, const int& salary, const double& ratio, eRISK_LEVEL risk);

		~ForeignSalesWorker();

		void ShowSalaryInfo()const;

		int GetPay()const;

		
	};

	class EmployeeHandler
	{
	private:
		Employee* empList[50];
		int empNum;
	public:
		EmployeeHandler();

		void AddEmployee(Employee* emp);

		void ShowAllSalaryInfo()const;

		void ShowTotalSalary()const;

		~EmployeeHandler();


	};
};

