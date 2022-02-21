#pragma once
#include <iostream>
namespace Test13_2
{
	template<typename T>
	class SmartPtr
	{
	private:
		T* posptr;
	public:
		SmartPtr(T* ptr);

		~SmartPtr();

		 T& operator*()
		{
			return *posptr;
		}

		 T* operator->()
		{
			return posptr;
		}
	};

	class Point
	{
	private:
		int xpos, ypos;
	public:
		Point(const int& x = 0, const int& y = 0);

		void SetPos(const int& x, const int& y);

		void ShowPosition()const;
	};

	template<typename T>
	 SmartPtr<T>::SmartPtr(T* ptr)
		:posptr(ptr)
	{}
	template<typename T>
	 SmartPtr<T>::~SmartPtr()
	{
		if (posptr != nullptr)
		{
			delete posptr;
			std::cout << "deleted" << std::endl;
		}
	}
};

