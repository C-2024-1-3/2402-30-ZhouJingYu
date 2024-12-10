#include<iostream>
#include"mytriangle.h"
using namespace std;
int main() {
	double side1;
	double side2;
	double side3;
	cout << "请输入三边" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1,side2,side3)==true) {
		cout << "此三角形错误！" << endl;
	}
	else {
		cout <<"面积为" << area(side1, side2, side3);

	}


}