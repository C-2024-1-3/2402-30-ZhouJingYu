#include<iostream>
using namespace std;


int main()
{
	int k = 0;//定义k，消除未定义k的错误
	int i = k + 1;
	cout << i++ << endl;
	cout << i++ << endl;//删去重复定义i的代码，消除错误
	cout << "Welcome to C++" << endl;
	return 0;
}