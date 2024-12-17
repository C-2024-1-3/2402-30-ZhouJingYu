#pragma once
//student.h                (这是头文件，在此文件中进行类的声明)
#include<cstring>
using namespace std;
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void setvalue(int Num, const char* Name, char Sex);
private:
	int num;
	char name[20];
	char sex;
};