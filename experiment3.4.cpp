#include<iostream>
#include"mytriangle.h"
using namespace std;
int main() {
	double side1;
	double side2;
	double side3;
	cout << "����������" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1,side2,side3)==true) {
		cout << "�������δ���" << endl;
	}
	else {
		cout <<"���Ϊ" << area(side1, side2, side3);

	}


}