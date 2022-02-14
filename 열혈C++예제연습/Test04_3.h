#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

namespace Test04_3
{
	enum class eComp_pos
	{
		CLERK,
		SENIOR,
		ASSIST,
		MANAGER
	};

	class NameCard
	{
		 char* mName;
		 char* mCompanyName;
		 char* mPhoneNumber;
		int mPosition;
	public:
		explicit NameCard(const char* name, const char* cname, const char* pnum, const int& p);

		void ShowNameCardInfo();

	private:
		const char* setComp(const int& val);
	};
};

