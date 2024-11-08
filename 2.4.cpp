#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	char ch;
	float a, b;
	cout <<"请输入运算符" << endl;
	cin >> ch;
	cout << "请依次输入两个数（考虑除法顺序）" << endl;
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
			cout << "被除数不可以是零！" << endl;
			break;
		}
		else {
			cout << a / b << endl;
			break;
		}
	default :
		cout << "请输入合法的运算符！" << endl;
		break;
	}
}