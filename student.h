#pragma once
//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
#include<cstring>
using namespace std;
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void setvalue(int Num, const char* Name, char Sex);
private:
	int num;
	char name[20];
	char sex;
};