#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double max = 0.00001;
	double a;
	cout << "����������" << endl;
	cin >> a;
	if (a < 0) {
		cout << "����û��ƽ������" << endl;
	}
	else if (a == 0) {
		cout << "���ƽ�������䱾����" << endl;
	}
	else {
		double x1 = a;
		double x2 = 0.5 * x1 + 0.5 * a / x1;
		while (x2 - x1 > max || x1 - x2 > max) {
			x1 = x2;
			x2 = 0.5 * x1 + 0.5 * a / x1;
		}
		cout << "����ƽ����Ϊ" << x2 << endl;
	}


}
