#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	double max = 1e-30;//�趨Ϊ1e-30Ҳ��Ӱ��������У�������Ϊ����0.0001�����ֻ��ÿ�ѧ��������ʾ������ʱdouble��С��λ��������Կ�ѧ�������ĸ�λ�����ԣ�����ʾ�������1��С��λΪ�㣬��Ȼ���ᱨ��
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
		cout << "���ȷ�ΧΪ" << max<< endl;//��Ҫע��double���ֻ��15λ��Ч���֣������˻ᵼ�����ݶ�ʧ����Ȼ�趨���ȷ�ΧΪe-30����ʵ��double����Чλ��֧�Ų��������ľ���
	}


}
