#include "Test02_4.h"

 void Test02_4::Q1::Print()
{
	char str[20];
	const char* source = "hello!";
	char source2[4] = "aaa";
	strcpy_s(str, 10, source);
	std::cout << "길이 : " << strlen(str) << std::endl;
	std::cout << "문자열 비교 : " << strcmp(str, source) << std::endl;
	strcat_s(str, sizeof(str), source2);
	printf("%s\n", str);
}

 void Test02_4::Q2::Print()
{
	srand(static_cast<unsigned int>(time(0)));
	for (int i = 0; i < 5; i++)
	{
		int random = rand() % 100;
		std::cout << random << std::endl;
	}
}
