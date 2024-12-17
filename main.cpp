#define _CRT_SECURE_NO_WARNINGS
#include <iostream>             //将类声明头文件包含进来
#include"student.h"
using namespace std;

int main()
{
	Student stud;                //定义对象
	Student stud1;
	stud1.setvalue(7, "tcg", 'm');
	stud.setvalue(7, "tcg", 'm');
	stud.display();              //执行stud对象的display函数
	return 0;
}