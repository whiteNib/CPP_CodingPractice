// PointerPractice.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int aArray[5] = {10,20,30,40,50};

	// aArray ������ aArray[0]�� �޸� �ּҸ� ������ �ִ�. 
	// &aArray = &aArray[0]
	cout << "aArray�� �ּ� : " << &aArray << " , aArray[0]�� �ּ� :" << &aArray[0] << endl;

	// ������ ����
	for (int i = 0; i < 5; i++)
	{
		cout << "\t �޸� �ּ� : " << &aArray[i] << " , aArray[" << i << "] = "<< aArray[i]<< 
			" , *(aArray+" << i << ") = " << *(aArray+i) <<endl;
	}

	cout<< endl;

	// �����ͷ� �迭�� ����
	int *ptr = aArray;
	cout << "ptr�� ����Ű�� �ּ� : " << ptr <<endl;
	for (int i = 0; i < 5; i++)
	{
		cout<< "\t �޸� �ּ� : " << ptr + i << " , p[" << i << "] = " << ptr[i] <<
			" *(p+" << i << ") = " << *(ptr+i)<<endl;
	}

	// ũ�� ��
	cout << "�迭�� ������ : " << sizeof(aArray) << ", ptr�� ������ : " << sizeof(ptr) << endl;
	// �迭�� int�� 5���� �Ҵ�Ǿ� �־ 20����Ʈ, 
	// ptr�� �迭�� �����ϱ� ������ �ּҰ��� ������ �� �ִ� �����̸� ���


	return 0;
}

