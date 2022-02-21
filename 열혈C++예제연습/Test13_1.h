#pragma once
#include <iostream>
namespace Test13_1_1
{
	class Point
	{
	private:
		int xpos, ypos;
	public:
		Point(const int& x = 0, const int& y = 0);

		void ShowPosition()const;

		template<typename T>
		void SwapData(T& p);
	};
	template<typename T>
	 void Point::SwapData(T& p)
	{
		T data = p;
		p = *this;
		*this = data;
	}
};

namespace Test13_1_2
{
	template<typename T>
	class Arr
	{
		T* mArr;
		int mSize;
	public:
		Arr(const int& size);

		~Arr();

		Arr(const Arr& iarr);

		Arr& operator=(const Arr& iarr)
		{
			if(mArr != nullptr)
			delete[] mArr;
			mSize = iarr.mSize;
			mArr = new T[mSize];
			for (int i = 0; i < mSize; i++)
			{
				mArr[i] = iarr[i];
			}
		}

		const T operator[](const int& index)const
		{
			return mArr[index];
		}

		T& operator[](const int& index)
		{
			return mArr[index];
		}

		void PrintArray();
	};

	template<typename T>
	static int SumArray(T arr[], int len)
	{
		int sum = 0;
		for (int i = 0; i < len; i++)
		{
			sum += arr[i];
		}
		return sum;
	}

	template<typename T>
	static int SumArray(T data, int length)
	{
		int sum = 0;
		for (int i = 0; i < length; i++)
		{
			sum += data[i];
		}
		return sum;
	}
	template<typename T>
	 Arr<T>::Arr(const int& size)
		:mSize(size)
	{
		mArr = new T[mSize];
	}
	template<typename T>
	 Arr<T>::~Arr()
	{
		delete[] mArr;
	}
	template<typename T>
	 Arr<T>::Arr(const Arr& iarr)
		:mSize(iarr.mSize)
	{
		mArr = new T[mSize];
		for (int i = 0; i < mSize; i++)
		{
			mArr[i] = iarr[i];
		}
	}
	template<typename T>
	 void Arr<T>::PrintArray()
	{
		for (int i = 0; i < mSize; i++)
		{
			std::cout << mArr[i] << " ";
		}
		std::cout << std::endl;
	}
}

