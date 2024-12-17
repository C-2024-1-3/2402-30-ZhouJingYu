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
		cout << "请输入长" << endl;
		cin >> len;
		length = len;
		cout << "请输入宽" << endl;
		cin >> wid;
		width = wid;
		cout << "请输入高" << endl;
		cin >> hei;
		height = hei;
	}
   void countv() 
	{

	 v=length * width * height;
	}
   void showv() {
	   cout << "体积为"<<v << endl;
   }
};
int main() {
	cout << "这是第一个长方柱" << endl;
	chang c1;
	c1.set();
	c1.countv();
	c1.showv();
	cout << "这是第二个长方柱" << endl;
	chang c2;
	c2.set();
	c2.countv();
	c2.showv();
	cout << "这是第三个长方柱" << endl;
	chang c3;
	c3.set();
	c3.countv();
	c3.showv()；
}
