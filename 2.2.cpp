#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	float x;
	cout << "请输入大于零的数字" << endl;
	cin >> x;
	if (x <= 0)
	{
		cout << "请输入大于零的数！" << endl;
	}
	else {
		if (x > 0 && x < 1)
		{float y = 3 - 2 * x;
		cout << "Y等于" << y << endl;
		}
		else {
			if (x >= 1 && x < 5)
			{
				float y = 0.5/x+1;
				cout << "Y等于" << y << endl;
		 }
			else
			{
				float y =x * x;
				cout << "Y等于" << y << endl;
			}
		
		}


	}



}