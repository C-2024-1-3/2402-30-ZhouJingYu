#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	char ch;
	float a, b;
	cout <<"�����������" << endl;
	cin >> ch;
	cout << "���������������������ǳ���˳��" << endl;
	cin >> a >> b;
	switch (ch) {
	case '+':
		cout << a + b;
		break;
	case '-':
		cout << a - b;
		break;
	case '*':
		cout << a * b;
		break;
	case '/':
		if (b == 0)
		{
			cout << "���������������㣡" << endl;
			break;
		}
		else {
			cout << a / b << endl;
			break;
		}
	default :
		cout << "������Ϸ����������" << endl;
		break;
	}
}