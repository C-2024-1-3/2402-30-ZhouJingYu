#include<iostream>
using namespace std;


int main ()
{
	
	float r, h;
	float p = 3.14;
	cout << "请输入圆锥的半径";
	cin >> r;
	cout << "请输入圆锥的高";
	cin >>h;
	if (r <= 0 || h <= 0)
	{
		cout << "高或半径不能为负数或零！" << endl;
		exit(0);
	}
	else {
		float v = r * r * h;
		cout << "这个圆锥的体积为" << v;
	}
	return 0;




}


