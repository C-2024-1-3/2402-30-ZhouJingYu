
#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	int day = 0, buy = 2,nu=0;
	float sum = 0.0, ave;
	while (buy <= 100) {
		day++;
		nu = nu + buy;
		buy = 2 * buy;
		
	}
	int num = nu - pow(2, day);
	    --day;
		sum = 0.8 * num;
	    ave = sum / day;
		cout << "����Ϊ" << day << endl;
		cout << "�ܼ�Ϊ" << sum << endl;
		cout << "���ƻ������Ϊ" << num << endl;
		cout << "ƽ��ÿ��۸�Ϊ" << ave << endl;





}
