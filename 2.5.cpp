#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	char c;
	int le=0, spa=0, oth=0, nu=0;
	while (cin.get(c))
	{
		if (c == '\n')
			break;
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			le++;
		else if (c >= '0' && c <= '9')
			nu++;
		else if (c == ' ')
			spa++;
		else
			oth++;
	}
	cout << "��ĸ�ĸ�����" << le<<endl;
	cout << "�ո�ĸ�����" <<spa<< endl;
	cout << "���ֵĸ�����" <<nu<< endl;
	cout << "�����ַ��ĸ�����" <<oth<< endl;
}