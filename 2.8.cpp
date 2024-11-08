#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double max = 0.00001;
	double a;
	cout << "请输入数字" << endl;
	cin >> a;
	if (a < 0) {
		cout << "负数没有平方根！" << endl;
	}
	else if (a == 0) {
		cout << "零的平方根是其本身零" << endl;
	}
	else {
		double x1 = a;
		double x2 = 0.5 * x1 + 0.5 * a / x1;
		while (x2 - x1 > max || x1 - x2 > max) {
			x1 = x2;
			x2 = 0.5 * x1 + 0.5 * a / x1;
		}
		cout << "所求平方根为" << x2 << endl;
	}


}
