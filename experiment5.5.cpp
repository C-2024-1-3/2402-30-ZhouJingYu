#include<iostream>
using namespace std;
class Point
{
private:
	double x, y;
public:
	void setPoint(int i, int j) 
	{
		x = x + i;
		y = y + j;
	};
	void display() {
		cout << "����Ϊ" << '(' << x << ',' << y << ')' << endl;
	};
	Point(int X = 60, int Y = 80)
	{
		x = X;
		y = Y;
	};
};
int main() 
{
	double i, j;
	cout << "���ĵ�ֵΪ" << endl;
	cin >> i >> j;
	Point p1;
	cout << "��ʼ�������꣺" << endl;
	p1.display();

	p1.setPoint(i,j);
	cout << "���ĺ�����꣺" << endl;
	p1.display();


}