#include "Test03_2.h"

 void Test03_2::Q1::Print()
{
	std::cout << "3.2 + 2.4 = " << add(3.2, 2.4) << std::endl;
	std::cout << "3.5 / 1.7 = " << div(3.5, 1.7) << std::endl;
	std::cout << "2.2 - 1.5 = " << min(2.2, 1.5) << std::endl;
	std::cout << "4.9 / 1.2 = " << div(4.9, 1.2) << std::endl;
	showOpCount();
}

 void Test03_2::Q1::showOpCount()
{
	std::cout << "µ¡¼À: " << addCount << " »¬¼À: " << minCount << " °ö¼À: " << mulCount << " ³ª´°¼À: " << divCount << std::endl;
}
