#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a, b, c;
	cout << "������������" << endl;
	cin>>a>>b>>c;
	if (a + b <= c || a + c <= b || b + c <= a) 
	{
		cout << "�������޷����������Σ�" << endl;
	}
	else {
		float d = a + b + c;
		cout << "�������ε��ܳ�Ϊ" <<d<< endl;
		if (a == b || a == c || b == c)
		{
			cout << "���ǵ���������" << endl;
		}
		else {
			cout << "�ⲻ�ǵ���������" << endl;
		}
		}
	


}