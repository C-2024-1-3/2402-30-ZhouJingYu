#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	float Hua;
	cout << "请输入华氏度" << endl;
	cin >> Hua;
	float She = (Hua - 32) / 1.8;
	cout << "转后的摄氏度为" << setprecision(3) << She << endl;
	system("pause");
	return 0;
}