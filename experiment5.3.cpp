#include<iostream>
using namespace std;
class chang 
{
private:
	double length, width, height;
	double v;
public:
	void set() {
		int len, wid, hei;
		cout << "�����볤" << endl;
		cin >> len;
		length = len;
		cout << "�������" << endl;
		cin >> wid;
		width = wid;
		cout << "�������" << endl;
		cin >> hei;
		height = hei;
	}
   void countv() 
	{

	 v=length * width * height;
	}
   void showv() {
	   cout << "���Ϊ"<<v << endl;
   }
};
int main() {
	cout << "���ǵ�һ��������" << endl;
	chang c1;
	c1.set();
	c1.countv();
	c1.showv();
	cout << "���ǵڶ���������" << endl;
	chang c2;
	c2.set();
	c2.countv();
	c2.showv();
	cout << "���ǵ�����������" << endl;
	chang c3;
	c3.set();
	c3.countv();
	c3.showv()��
}
