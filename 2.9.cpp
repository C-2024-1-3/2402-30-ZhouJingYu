
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
		cout << "天数为" << day << endl;
		cout << "总价为" << sum << endl;
		cout << "买的苹果个数为" << num << endl;
		cout << "平均每天价格为" << ave << endl;





}
