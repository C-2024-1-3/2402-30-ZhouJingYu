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
		cout << "坐标为" << '(' << x << ',' << y << ')' << endl;
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
	cout << "更改的值为" << endl;
	cin >> i >> j;
	Point p1;
	cout << "初始化的坐标：" << endl;
	p1.display();

	p1.setPoint(i,j);
	cout << "更改后的坐标：" << endl;
	p1.display();


}