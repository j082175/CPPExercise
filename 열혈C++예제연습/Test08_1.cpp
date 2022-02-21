#include "Test08_1.h"

 Test08_1::Employee::Employee(const char* name)
{
	mName = new char[strlen(name) + 1];
	strcpy(this->mName, name);
}

 void Test08_1::Employee::ShowYourName() const
{
	std::cout << "name: " << mName << std::endl;
}

 int Test08_1::Employee::GetPay() const
{
	return 0;
}

 Test08_1::PermanentWorker::PermanentWorker(const char* name, const int& money)
	:Employee(name), salary(money)
{}

 int Test08_1::PermanentWorker::GetPay() const
{
	return salary;
}

 void Test08_1::PermanentWorker::ShowSalaryInfo() const
{
	ShowYourName();
	std::cout << "salary: " << GetPay() << std::endl;
}

 Test08_1::TemporaryWorker::TemporaryWorker(const char* name, const int& money)
	:Employee(name), payPerHour(money), workTime(0)
{}

 void Test08_1::TemporaryWorker::AddWorkTime(const int& time)
{
	workTime += time;
}

 int Test08_1::TemporaryWorker::GetPay() const
{
	return workTime * payPerHour;
}

 void Test08_1::TemporaryWorker::ShowSalaryInfo() const
{
	ShowYourName();
	std::cout << "salary: " << GetPay() << '\n' << std::endl;
}

 Test08_1::SalesWorker::SalesWorker(const char* name, const int& money, const double& ratio)
	:PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
{}

 void Test08_1::SalesWorker::AddSalesResult(const int& value)
{
	salesResult += value;
}

 int Test08_1::SalesWorker::GetPay() const
{
	return PermanentWorker::GetPay() + static_cast<int>(salesResult * bonusRatio);
}

 void Test08_1::SalesWorker::ShowSalaryInfo() const
{
	ShowYourName();
	std::cout << "salary: " << GetPay() << '\n' << std::endl;
}

 Test08_1::ForeignSalesWorker::ForeignSalesWorker(const char* name, const int& salary, const double& ratio, eRISK_LEVEL risk)
	:SalesWorker(name, salary, ratio),
	mRiskPay(risk)
{
}

 Test08_1::ForeignSalesWorker::~ForeignSalesWorker()
{

}

 void Test08_1::ForeignSalesWorker::ShowSalaryInfo() const
{
	ShowYourName();
	std::cout << "salary: " << GetPay() << '\n' << std::endl;
}

 int Test08_1::ForeignSalesWorker::GetPay() const
{
	return SalesWorker::GetPay() * (static_cast<double>(mRiskPay) / 100);
}

 Test08_1::EmployeeHandler::EmployeeHandler()
	:empNum(0)
{
}

 void Test08_1::EmployeeHandler::AddEmployee(Employee* emp)
{
	empList[empNum++] = emp;
}

 void Test08_1::EmployeeHandler::ShowAllSalaryInfo() const
{
	for (int i = 0; i < empNum; i++)
	{
		empList[i]->ShowSalaryInfo();
	}
}

 void Test08_1::EmployeeHandler::ShowTotalSalary() const
{
	int sum = 0;
	for (int i = 0; i < empNum; i++)
	{
		sum += empList[i]->GetPay();
	}
}

 Test08_1::EmployeeHandler::~EmployeeHandler()
{
	for (int i = 0; i < empNum; i++)
	{
		delete empList[i];
	}
}
