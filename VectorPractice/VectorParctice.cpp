// VectorParctice.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
#include <map>
#include <vector>

int n_A; // erase�� x ��
int n_B; // erase�� y ��
int _tmain(int argc, _TCHAR* argv[])
{
	// ���Ϳ� 10�� ������ ����
	vector<int> v_VectorTest;
	for (int i = 0; i<10; i++)
	{
		v_VectorTest.push_back(i);
		cout << i << "��° �޸� �ּ� : " << &v_VectorTest[i] << ", ������ �� : " << v_VectorTest[i]<< endl;
	}

	cout << endl;

	// erase�� �Էµ� ���۹���(x), ������(y)
	cout << "������ ���� ����� ������ �Է��ϼ���." << endl;
	cout << "������ ���� ����� ���� ���� x �� :" ;
	cin >> n_A;
	cout << "������ ���� ����� �� ���� y �� :" ;
	cin >> n_B;

	cout << endl;


	// v_VectorTest.begin() : ������ �������� �ּ� ��ȯ.
	// v_VectorTest.end() : ������ ���κ� +1 �ּ� ��ȯ.
	// erase�� ����� ������ ��Ұ� ��������, �޸𸮴� ������ �������. 
	// x��° ��Һ���, y-1������ ��Ұ� ��������.
	v_VectorTest.erase(v_VectorTest.begin()+n_A, v_VectorTest.begin()+n_B);

	size_t size = v_VectorTest.size(); // ������ ������
	size_t capacity = v_VectorTest.capacity(); // ������ ������


	//0������~ ������ ���� �޸� �ּ� ���
	for (int i = 0; i < v_VectorTest.size(); i++)
	{
		cout <<  endl;
		cout << i << "��° �޸� �ּ� : "  ;
		cout << &v_VectorTest[i] << "," << "���� ��" << v_VectorTest[i] << endl;
	}

	cout << endl;

	// erase�� ������ ��Ҹ� �����ϸ� size�� �پ���.
	cout << "���� �� ������ ������ : "  << size << endl; 

	// erase�� �����ص� capacity�� �پ���� �ʴ´�.
	cout << "���� �� ������ capacity: "  << capacity << endl; 
	cout << "erase�� �����ϸ� size�� �پ�峪, capacity�� �پ���� �ʴ´�." << endl;

	cout << endl;

	// ������ ����° ĭ�� �� 5 �߰�.
	//v_VectorTest.insert(v_VectorTest.begin()+3, 5);

	// ���� �߰��� �����迭�� �߰��Ͽ� �޸� �ּ� �׽�Ʈ
	int a[] = {1,2,3,4,5,6};
	for (int i = 0; i < 6; i++)
	{
		cout << "���� �迭�� �ּ� :" ;
		cout << &a[i] << endl;
	}

	cout << endl;

	// CLEAR
	// ��� ������ ��Ҹ� ����
	// size�� 0�� ������, �뷮�� �״�ζ� �޸𸮰� �����ִ�. 

	cout << "clear �Լ� ������...\n" << endl;

	v_VectorTest.clear(); 

	cout << "clear �Լ� �����Ͽ� ���͸� �� �����, ���Ϳ� 10�� ���� ����\n" << endl;



	// ���Ϳ� 10�� �� ������ ����
	for (int i = 0; i<10; i++)
	{
		v_VectorTest.push_back(i);
		cout << i << "��° �޸� �ּ� : " << &v_VectorTest[i] << " , ������ �� : " << v_VectorTest[i] << endl;
	}
	
	cout << endl;

	int n_C; // ������ Ư�� ������ ���
	cout << "���Ϳ��� ������ Ư�� ������ �Է����ּ��� : ";
	cin >> n_C;
	v_VectorTest.erase(v_VectorTest.begin() + n_C); // Ư�� ��ġ�� ���� ��Ҹ� ����

	size_t size2 = v_VectorTest.size(); // ������ ������
	size_t capacity2 = v_VectorTest.capacity(); // ������ ������

	//0������ ~ ������ ���� �޸� �ּ� ���
	for (int i = 0; i < v_VectorTest.size(); i++)
	{
		cout << i << "��° �ּ� : " << &v_VectorTest[i] << " , ������ �� : " << v_VectorTest[i] << endl;
		cout << endl;
	}

	cout << endl;
	cout<< "�ѹ��� �޸� �ּ� ���"<< endl;
	cout << endl;
	// 0������ ������ ���� �޸� �ּ� ���
	for (int i = 0; i < v_VectorTest.size(); i++)
	{
		cout<< i<< "��° �޸� �ּ� : ";
		cout << &v_VectorTest[i] << endl;
	}
	//////////////////////////////////////////////////////////////////////////







	//map<string, int> MapTest1; // key = string, value = int

	//MapTest1.insert(make_pair("a",1)); // 2
	//MapTest1.insert(make_pair("d",2)); //5
	//MapTest1.insert(make_pair("qwgt",3)); // 6
	//MapTest1.insert(make_pair("we",4)); //7
	//MapTest1.insert(make_pair("c",5)); // 4
	//MapTest1.insert(make_pair("0",6)); // 1
	//MapTest1.insert(make_pair("b",7)); // 3

	//map<int, int> MapTest2; // key = int, value = int

	//MapTest2.insert(make_pair(1,1)); // 1
	//MapTest2.insert(make_pair(3,2)); // 3
	//MapTest2.insert(make_pair(7,3)); // 6
	//MapTest2.insert(make_pair(5,4)); // 5
	//MapTest2.insert(make_pair(9,5)); // 7
	//MapTest2.insert(make_pair(2,6)); // 2
	//MapTest2.insert(make_pair(4,7)); // 4



	return 0;
}



