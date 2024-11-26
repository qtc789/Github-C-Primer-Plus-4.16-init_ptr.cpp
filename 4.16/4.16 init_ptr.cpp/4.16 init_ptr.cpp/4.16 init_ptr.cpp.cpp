// 4.16 init_ptr.cpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
	using namespace std;
	int higgens=5;
	int* pt = &higgens;
	cout << "values    " << higgens << endl;
	cout << "*p_updates" << *pt << endl;
	cout << &higgens << endl;
	cout << pt << endl;
	



}