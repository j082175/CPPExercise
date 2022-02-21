#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
//#include "Test01_1.h"
//#include "Test01_2.h"
//#include "Test01_3.h"
//
//#include "Test02_1.h"
//#include "Test02_2.h"
//#include "Test02_3.h"
//#include "Test02_4.h"
//
//#include "Test03_1.h"
//#include "Test03_2.h"
//
//#include "Test04_2.h"
//#include "Test04_3.h"
//
//#include "Test05_1.h"
//
//#include "Test07_1.h"
//#include "Test07_2.h"
//
//#include "Test08_1.h"
//
//#include "Test10_1.h"
//#include "Test10_2.h"
//
//#include "Test11_1.h"
//#include "Test11_2.h"

#include "String.h"
using namespace std;


int main()
{

	/* using namespace Test01_1;
	 std::cout << Q1{ 1,2,3,4,5 }.Print() << std::endl;
	 Q2().Print();
	 Q3(5).Print();
	 Q4().Print();

	 Test01_2::Q1().Print();

	 Test01_3::Q1().Print();
	 Test01_3::Q2().Print();

	 Test02_1::Q1(55).Print();
	 Test02_1::Q3(10, 20).Print();

	 Test02_2::Q1().Print();

	 Test02_3::Q1().Print();

	 Test02_4::Q1().Print();
	 Test02_4::Q2().Print();

	 Test03_1::Point().Print();
	 Test03_2::Q1().Print();
	 Test03_2::Q2_Printer().Print();

	 Test04_2::Ring ring;
	 ring.Init(1, 1, 4, 2, 2, 9);
	 ring.ShowRingInfo();

	 using namespace Test04_3;
	 NameCard manClerk("Lee", "ABCEng", "010-1111-2222", static_cast<int>(eComp_pos::CLERK));
	 NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", static_cast<int>(eComp_pos::SENIOR));
	 NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", static_cast<int>(eComp_pos::ASSIST));
	 manClerk.ShowNameCardInfo();
	 manSENIOR.ShowNameCardInfo();
	 manAssist.ShowNameCardInfo();

	 using namespace Test05_1;
	 Test05_1::NameCard manClerk1("Lee", "ABCEng", "010-1111-2222", static_cast<int>(Test05_1::eComp_pos::CLERK));
	 Test05_1::NameCard copy1 = manClerk1;
	 Test05_1::NameCard manSENIOR2("Hong", "OrangeEng", "010-3333-4444", static_cast<int>(Test05_1::eComp_pos::SENIOR));
	 Test05_1::NameCard copy2 = manSENIOR2;
	 copy1.ShowNameCardInfo();
	 copy2.ShowNameCardInfo();

	 Test07_1_1::HybridWaterCar c(55);
	 c.GetElecGauge();
	 c.GetGasGauge();
	 c.ShowCurrentGauge();

	 Test07_1_2::MyFriendDetailInfo info("Joh", "Iphone7", "Lee", 45);
	 info.ShowMyFriendDetailInfo();
	 info.ShowMyFriendInfo();

	 using namespace Test07_2_1;
	 Rectangle rec(4, 3);
	 rec.ShowAreaInfo();
	 Square sqr(7);
	 sqr.ShowAreaInfo();

	 using namespace Test07_2_2;
	 Book book("좋은 C++", "555-12345-890-0", 20000);
	 book.ShowBookInfo();
	 cout << endl;
	 EBook ebook("좋은 C++", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	 ebook.ShowBookInfo();

	 using namespace Test08_1;
	 EmployeeHandler handler;

	 ForeignSalesWorker* fseller1 = new ForeignSalesWorker("Hong", 1000, 0.1, eRISK_LEVEL::RISK_A);
	 fseller1->AddSalesResult(7000);
	 handler.AddEmployee(fseller1);

	 ForeignSalesWorker* fseller2 = new ForeignSalesWorker("Yoon", 1000, 0.1, eRISK_LEVEL::RISK_B);
	 fseller2->AddSalesResult(7000);
	 handler.AddEmployee(fseller2);

	 ForeignSalesWorker* fseller3 = new ForeignSalesWorker("Lee", 1000, 0.1, eRISK_LEVEL::RISK_C);
	 fseller2->AddSalesResult(7000);
	 handler.AddEmployee(fseller3);

	 handler.ShowAllSalaryInfo();

	 using namespace Test10_1;
	 Test10_1::Point p1(1, 1);
	 Test10_1::Point p2(2, 2);
	 bool x = p1 == p2;
	 bool y = p1 != p2;
	 cout << x << " " << y << endl;

	 Test10_2::Point p3(3, 3);
	 ++++p3;
	 p3.ShowPosition();
	 --(--p3);
	 const Test10_2::Point& p4 = -p3;
	 int a = 1;


	 Test11_1_2::Book b("a", "b", 50);
	 Test11_1_2::EBook eb("r", "re", 55, "test");
	 b.ShowBookInfo();
	 cout << endl;
	 eb.ShowBookInfo();
	 cout << endl;
	 b = eb;
	 b.ShowBookInfo();
	 cout << endl;
	 Test11_1_2::Book b2(b);
	 b2.ShowBookInfo();

	 using namespace Test11_2_1;
	 Test11_2_1::Point p22(3, 4);
	 BoundCheckPointArray bound(4);
	 bound[0] = p22;
	 Test11_2_1::Point* p5 = new Test11_2_1::Point(5, 5);
	 bound[1] = *p5;

	 for (int i = 0; i < bound.GetArrLen(); i++)
	 {
		 cout << bound[i];
	 }*/

	//String str1 = "I like ";
	//String str2 = "string class";
	//String str3 = str1 + str2;

	//cout << str1 << endl;
	//cout << str2 << endl;
	//cout << str3 << endl;

	//str1 += str2;
	//if (str1 == str3)
	//{
	//	cout << "동일 문자열! " << endl;
	//}
	//else
	//{
	//	cout << "동일하지 않은 문자열!" << endl;
	//}

	//String str4;
	//cout << "문자열 입력: ";
	//cin >> str4;
	//cout << "입력한 문자열: " << str4 << endl;
}
