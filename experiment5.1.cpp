#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:             // ���ݳ�ԱΪ���õ�
		int hour;
	int minute;
	int sec;
public:
	void settime(int Hour,int Minute,int Sec) {
		hour = Hour;
		minute = Minute;
		sec = Sec;
	}
	void showtime() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	int Hour;
	int Minute, Sec;
	Time t1;           //����t1ΪTime�����
	cin >>Hour;      //�����趨��ʱ�� 
	cin >> Minute;
	cin >> Sec;
	t1.settime(Hour, Minute, Sec);
	t1.showtime();
	return 0;
}