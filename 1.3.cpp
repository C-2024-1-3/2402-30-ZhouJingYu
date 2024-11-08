#include<iostream>
using namespace std;
int main()
{
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "bool length:" << sizeof(bool) << endl;
	cout << "[signed] char length:" << sizeof(signed char) << endl;
	cout << "unsigned char length:" << sizeof(unsigned char) << endl;
	cout << "wchar_t length:" << sizeof(wchar_t) << endl;
	cout << "[signed] int length:" << sizeof(signed int) << endl;
	cout << "unsigned int length:" << sizeof(unsigned int) << endl;
	cout << "[signed] short [int] length:" << sizeof(signed short int) << endl;
	cout << "[signed] long [int]length:" << sizeof(signed long int) << endl;
	cout << "unsigned short [int] length:" << sizeof(unsigned short int) << endl;
	cout << "unsigned long [int] length:" << sizeof(unsigned long int) << endl;
	cout << "float length:" << sizeof(double) << endl;
	cout << "long double length:" << sizeof(long double) << endl;
}