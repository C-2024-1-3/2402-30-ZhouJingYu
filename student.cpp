﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include"student.h"     //不要漏写此行，否则编译通不过
using namespace std;
void Student::display()         //在类外定义display类函数
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::setvalue(int Num, const char* Name, char Sex)
{
    num = Num;
    strcpy(name, Name);
    sex = Sex;

}
