#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	float Hua;
	cout << "�����뻪�϶�" << endl;
	cin >> Hua;
	float She = (Hua - 32) / 1.8;
	cout << "ת������϶�Ϊ" << setprecision(3) << She << endl;
	system("pause");
	return 0;
}