#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a, b, c;
	cout << "请输入三条边" << endl;
	cin>>a>>b>>c;
	if (a + b <= c || a + c <= b || b + c <= a) 
	{
		cout << "此三边无法构成三角形！" << endl;
	}
	else {
		float d = a + b + c;
		cout << "此三角形的周长为" <<d<< endl;
		if (a == b || a == c || b == c)
		{
			cout << "这是等腰三角形" << endl;
		}
		else {
			cout << "这不是等腰三角形" << endl;
		}
		}
	


}