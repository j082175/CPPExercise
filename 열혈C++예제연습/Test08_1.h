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
		Employee(const char* name)
		{
			mName = new char[strlen(name) + 1];
			strcpy(this->mName, name);
		}

		void ShowYourName()const
		{
			std::cout << "name: " << mName << std::endl;
		}

		virtual int GetPay()const = 0
		{
			return 0;
		}

		virtual void ShowSalaryInfo()const = 0;
	};

	class PermanentWorker : public Employee
	{
	private:
		int salary;
	public:
		PermanentWorker(const char* name, const int& money)
			:Employee(name),salary(money)
		{}

		int GetPay()const
		{
			return salary;
		}

		void ShowSalaryInfo()const
		{
			ShowYourName();
			std::cout << "salary: " << GetPay() << std::endl;
		}
	};

	class TemporaryWorker : public Employee
	{
		int workTime;
		int payPerHour;
	public:
		TemporaryWorker(const char* name,const int& money)
			:Employee(name),payPerHour(money),workTime(0)
		{}

		void AddWorkTime(const int& time)
		{
			workTime += time;
		}

		int GetPay()const
		{
			return workTime * payPerHour;
		}

		void ShowSalaryInfo()const
		{
			ShowYourName();
			std::cout << "salary: " << GetPay() << '\n' << std::endl;
		}


	};

	class SalesWorker : public PermanentWorker
	{
		int salesResult;
		double bonusRatio;
	public:
		SalesWorker(const char* name, const int& money, const double& ratio)
			:PermanentWorker(name,money),salesResult(0),bonusRatio(ratio)
		{}

		void AddSalesResult(const int& value)
		{
			salesResult += value;
		}

		int GetPay()const
		{
			return PermanentWorker::GetPay() + static_cast<int>(salesResult * bonusRatio);
		}

		void ShowSalaryInfo()const
		{
			ShowYourName();
			std::cout << "salary: " << GetPay() << '\n' << std::endl;
		}
	};

	class ForeignSalesWorker : public SalesWorker
	{
	private:
		eRISK_LEVEL mRiskPay;
	public:
		ForeignSalesWorker(const char* name, const int& salary,const double& ratio, eRISK_LEVEL risk)
			:SalesWorker(name,salary,ratio),
			mRiskPay(risk)
		{
		}

		~ForeignSalesWorker()
		{
		
		}

		void ShowSalaryInfo()const
		{
			ShowYourName();
			std::cout << "salary: " << GetPay() << '\n' << std::endl;
		}

		int GetPay()const
		{
			return SalesWorker::GetPay() *( static_cast<double>(mRiskPay) / 100);
		}

		
	};

	class EmployeeHandler
	{
	private:
		Employee* empList[50];
		int empNum;
	public:
		EmployeeHandler()
			:empNum(0)
		{
		}

		void AddEmployee(Employee* emp)
		{
			empList[empNum++] = emp;
		}

		void ShowAllSalaryInfo()const
		{
			for (int i = 0; i < empNum; i++)
			{
				empList[i]->ShowSalaryInfo();
			}
		}

		void ShowTotalSalary()const
		{
			int sum = 0;
			for (int i = 0; i < empNum; i++)
			{
				sum += empList[i]->GetPay();
			}
		}

		~EmployeeHandler()
		{
			for (int i = 0; i < empNum; i++)
			{
				delete empList[i];
			}
		}


	};
};

