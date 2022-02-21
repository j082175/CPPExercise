#include "String.h"

 String::String(const char* string)
{
	mString = new char[strlen(string) + 1];
	strcpy(mString, string);
}

 String::String(const String& string)
{
	mString = new char[strlen(string.mString) + 1];
	strcpy(mString, string.mString);
}

 String::~String()
{
	if (mString != nullptr)
	{
		delete[] mString;
	}
}
