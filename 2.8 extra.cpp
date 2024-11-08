#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double max = 1e-30;//设定为1e-30也不影响程序运行，这是因为这种0.0001的数字会用科学计数法表示，而此时double的小数位限制是针对科学计数法的个位数而言，而表示后的数字1的小数位为零，自然不会报错
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
		cout << "精度范围为" << max<< endl;//但要注意double最高只有15位有效数字，超过了会导致数据丢失，虽然设定精度范围为e-30，但实际double的有效位数支撑不到这样的精度
	}


}
