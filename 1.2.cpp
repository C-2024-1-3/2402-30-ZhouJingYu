#include<iostream>
using namespace std;


int main ()
{
	
	float r, h;
	float p = 3.14;
	cout << "������Բ׶�İ뾶";
	cin >> r;
	cout << "������Բ׶�ĸ�";
	cin >>h;
	if (r <= 0 || h <= 0)
	{
		cout << "�߻�뾶����Ϊ�������㣡" << endl;
		exit(0);
	}
	else {
		float v = r * r * h;
		cout << "���Բ׶�����Ϊ" << v;
	}
	return 0;




}


