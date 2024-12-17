#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:             // 数据成员为公用的
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
	Time t1;           //定义t1为Time类对象
	cin >>Hour;      //输入设定的时间 
	cin >> Minute;
	cin >> Sec;
	t1.settime(Hour, Minute, Sec);
	t1.showtime();
	return 0;
}