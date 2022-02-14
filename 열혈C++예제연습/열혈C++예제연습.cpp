
#include <iostream>
//#include "Test01_1.h"
//#include "Test01_2.h"
//#include "Test01_3.h"
//
//#include "Test02_1.h"
//#include "Test02_2.h"
//#include "Test02_3.h"
//#include "Test02_4.h"

#include "Test03_1.h"
#include "Test03_2.h"

using namespace std;

int main()
{
   /* using namespace Test01_1;
    std::cout << Q1{ 1,2,3,4,5 }.Print() << std::endl;
    Q2().Print();
    Q3(5).Print();
    Q4().Print();*/

   // Test01_2::Q1().Print();

 /*   Test01_3::Q1().Print();
    Test01_3::Q2().Print();*/

    //Test02_1::Q1(55).Print();
    //Test02_1::Q3(10, 20).Print();

    //Test02_2::Q1().Print();
    
    //Test02_3::Q1().Print();

   /* Test02_4::Q1().Print();
    Test02_4::Q2().Print();*/
    
    Test03_1::Point().Print();
    Test03_2::Q1().Print();
    Test03_2::Q2_Printer().Print();
}
