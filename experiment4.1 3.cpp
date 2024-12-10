#include<iostream>
using namespace std;
int main() {
	bool box[100] = {false};
	for (int i = 0;i < 100;i++) {
		box[i] = true;
	}//第一个学生打开所有柜子
	for (int s= 2;s < 101;s++) {
		for (int i = s;i <= 100;i=i+s) { box[i] = !box[i]; }
	}
	cout << "开着的号码为" << endl;
	for (int i = 1;i < 101;++i) {
		if (box[i]) {
			cout << i << " ";
		}
	}
	cout << "" << endl;
	cout << "关着的号码为" << endl;
	for (int i = 1;i < 101;++i) {
		if (!box[i]) {
			cout << i << " ";
		}
	}
}