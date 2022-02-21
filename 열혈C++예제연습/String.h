#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class String
{
	char* mString = nullptr;
public:
	String(const char* string = "");

	String(const String& string = "");

	~String();

	String& operator=(const String& string)
	{
		if (string.mString != nullptr)
		{
			delete[] mString;
			mString = new char[strlen(string.mString) + 1];
			strcpy(mString, string.mString);
		}
		return *this;
	}

	String operator+(const String& string)
	{
		char* newString;
		std::size_t size = strlen(mString) + strlen(string.mString) + 1;
		newString = new char[size];
		strcpy(newString, mString);
		
		strcat(newString, string.mString);
		return String(newString);
	}

	String& operator+=(const String& string)
	{
		char* newString;
		std::size_t size = strlen(mString) + strlen(string.mString) + 1;
		newString = new char[size];
		strcpy(newString, mString);
		if(mString != nullptr)
		delete[] mString;

		strcat(newString, string.mString);
		mString = newString;
		return *this;
	}

	bool operator==(const String& string)
	{
		return !strcmp(mString, string.mString);
	}

	friend std::ostream& operator<<(std::ostream& out, const String& string)
	{
		out << string.mString;
		return out;
	}

	String& operator()(const String& string)
	{
		if (string.mString != nullptr)
		{
			delete[] mString;
			mString = new char[strlen(string.mString) + 1];
			strcpy(mString, string.mString);
		}
		return *this;
	}

	friend std::istream& operator>>(std::istream& in, String& string)
	{
		char source[100];
		in >> source;
		string(String(source));
		return in;
	}
};

