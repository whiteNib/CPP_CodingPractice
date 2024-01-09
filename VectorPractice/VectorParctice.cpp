// VectorParctice.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
#include <map>
#include <vector>

int n_A; // erase의 x 값
int n_B; // erase의 y 값
int _tmain(int argc, _TCHAR* argv[])
{
	// 벡터에 10개 데이터 삽입
	vector<int> v_VectorTest;
	for (int i = 0; i<10; i++)
	{
		v_VectorTest.push_back(i);
		cout << i << "번째 메모리 주소 : " << &v_VectorTest[i] << ", 벡터의 값 : " << v_VectorTest[i]<< endl;
	}

	cout << endl;

	// erase에 입력될 시작범위(x), 끝범위(y)
	cout << "삭제할 벡터 요소의 범위를 입력하세요." << endl;
	cout << "삭제할 벡터 요소의 시작 범위 x 값 :" ;
	cin >> n_A;
	cout << "삭제할 벡터 요소의 끝 범위 y 값 :" ;
	cin >> n_B;

	cout << endl;


	// v_VectorTest.begin() : 벡터의 시작점의 주소 반환.
	// v_VectorTest.end() : 벡터의 끝부분 +1 주소 반환.
	// erase로 지우면 벡터의 요소가 지워지고, 메모리는 앞으로 당겨진다. 
	// x번째 요소부터, y-1까지의 요소가 지워진다.
	v_VectorTest.erase(v_VectorTest.begin()+n_A, v_VectorTest.begin()+n_B);

	size_t size = v_VectorTest.size(); // 벡터의 사이즈
	size_t capacity = v_VectorTest.capacity(); // 벡터의 여유분


	//0번부터~ 끝까지 벡터 메모리 주소 출력
	for (int i = 0; i < v_VectorTest.size(); i++)
	{
		cout <<  endl;
		cout << i << "번째 메모리 주소 : "  ;
		cout << &v_VectorTest[i] << "," << "벡터 값" << v_VectorTest[i] << endl;
	}

	cout << endl;

	// erase로 벡터의 요소를 삭제하면 size는 줄어든다.
	cout << "삭제 후 벡터의 사이즈 : "  << size << endl; 

	// erase로 삭제해도 capacity는 줄어들지 않는다.
	cout << "삭제 후 벡터의 capacity: "  << capacity << endl; 
	cout << "erase로 삭제하면 size는 줄어드나, capacity는 줄어들지 않는다." << endl;

	cout << endl;

	// 벡터의 세번째 칸에 값 5 추가.
	//v_VectorTest.insert(v_VectorTest.begin()+3, 5);

	// 벡터 중간에 정적배열을 추가하여 메모리 주소 테스트
	int a[] = {1,2,3,4,5,6};
	for (int i = 0; i < 6; i++)
	{
		cout << "정적 배열의 주소 :" ;
		cout << &a[i] << endl;
	}

	cout << endl;

	// CLEAR
	// 모든 벡터의 요소를 삭제
	// size는 0이 되지만, 용량은 그대로라서 메모리가 잡혀있다. 

	cout << "clear 함수 실행중...\n" << endl;

	v_VectorTest.clear(); 

	cout << "clear 함수 실행하여 벡터를 다 지우고, 벡터에 10개 값을 삽입\n" << endl;



	// 벡터에 10개 더 데이터 삽입
	for (int i = 0; i<10; i++)
	{
		v_VectorTest.push_back(i);
		cout << i << "번째 메모리 주소 : " << &v_VectorTest[i] << " , 벡터의 값 : " << v_VectorTest[i] << endl;
	}
	
	cout << endl;

	int n_C; // 삭제할 특정 순서의 요소
	cout << "벡터에서 삭제할 특정 순서를 입력해주세요 : ";
	cin >> n_C;
	v_VectorTest.erase(v_VectorTest.begin() + n_C); // 특정 위치의 벡터 요소를 삭제

	size_t size2 = v_VectorTest.size(); // 벡터의 사이즈
	size_t capacity2 = v_VectorTest.capacity(); // 벡터의 여유분

	//0번부터 ~ 끝까지 벡터 메모리 주소 출력
	for (int i = 0; i < v_VectorTest.size(); i++)
	{
		cout << i << "번째 주소 : " << &v_VectorTest[i] << " , 벡터의 값 : " << v_VectorTest[i] << endl;
		cout << endl;
	}

	cout << endl;
	cout<< "한번에 메모리 주소 출력"<< endl;
	cout << endl;
	// 0번부터 끝까지 벡터 메모리 주소 출력
	for (int i = 0; i < v_VectorTest.size(); i++)
	{
		cout<< i<< "번째 메모리 주소 : ";
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



