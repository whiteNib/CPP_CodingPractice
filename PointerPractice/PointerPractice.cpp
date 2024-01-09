// PointerPractice.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int aArray[5] = {10,20,30,40,50};

	// aArray 변수는 aArray[0]의 메모리 주소를 가지고 있다. 
	// &aArray = &aArray[0]
	cout << "aArray의 주소 : " << &aArray << " , aArray[0]의 주소 :" << &aArray[0] << endl;

	// 포인터 연산
	for (int i = 0; i < 5; i++)
	{
		cout << "\t 메모리 주소 : " << &aArray[i] << " , aArray[" << i << "] = "<< aArray[i]<< 
			" , *(aArray+" << i << ") = " << *(aArray+i) <<endl;
	}

	cout<< endl;

	// 포인터로 배열을 참조
	int *ptr = aArray;
	cout << "ptr이 가리키는 주소 : " << ptr <<endl;
	for (int i = 0; i < 5; i++)
	{
		cout<< "\t 메모리 주소 : " << ptr + i << " , p[" << i << "] = " << ptr[i] <<
			" *(p+" << i << ") = " << *(ptr+i)<<endl;
	}

	// 크기 비교
	cout << "배열의 사이즈 : " << sizeof(aArray) << ", ptr의 사이즈 : " << sizeof(ptr) << endl;
	// 배열은 int형 5개가 할당되어 있어서 20바이트, 
	// ptr은 배열을 참조하기 때문에 주소값만 저장할 수 있는 공간이면 충분


	return 0;
}

