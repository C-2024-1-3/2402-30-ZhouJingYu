#include<iostream>
using namespace std;
int math(int day);
int math(int day) {
	if (day == 10) { return 1; }
	else { return 2 * (math(day + 1) + 1); }
}
int main() {

	int day = 1;
	cout <<"���ӵ�һ��ժ��"<< math(day) <<"������"<< endl;

}
	