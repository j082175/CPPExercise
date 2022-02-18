#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class String
{
	char* mString = nullptr;
public:
	String(const char* string = "")
	{
		if (string != nullptr)
		{
			mString = new char[strlen(string) + 1];
			strcpy(mString, string);
		}
	}

	String(const String& string = "")
	{
		if (string.mString != nullptr)
		{
			mString = new char[strlen(string.mString) + 1];
			strcpy(mString, string.mString);
		}
	}

	~String()
	{
		delete[] mString;
	}

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

	String& operator+(const String& string)
	{
		int size = strlen(mString) + strlen(string.mString) + 1;

		mString = new char[size + 10];
		
		strcat(mString, string.mString);
		return *this;
	}

	String& operator+=(const String& string)
	{
		strcat(mString, string.mString);
		return *this;
	}

	bool operator==(const String& string)
	{
		return strcmp(mString, string.mString);
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
	}

	friend std::istream& operator>>(std::istream& in, String& string)
	{
		char source[100];
		in >> source;
		string(String(source));
		return in;
	}
};

