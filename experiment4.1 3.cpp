#include<iostream>
using namespace std;
int main() {
	bool box[100] = {false};
	for (int i = 0;i < 100;i++) {
		box[i] = true;
	}//��һ��ѧ�������й���
	for (int s= 2;s < 101;s++) {
		for (int i = s;i <= 100;i=i+s) { box[i] = !box[i]; }
	}
	cout << "���ŵĺ���Ϊ" << endl;
	for (int i = 1;i < 101;++i) {
		if (box[i]) {
			cout << i << " ";
		}
	}
	cout << "" << endl;
	cout << "���ŵĺ���Ϊ" << endl;
	for (int i = 1;i < 101;++i) {
		if (!box[i]) {
			cout << i << " ";
		}
	}
}