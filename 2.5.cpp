#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	char c;
	int le=0, spa=0, oth=0, nu=0;
	while (cin.get(c))
	{
		if (c == '\n')
			break;
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			le++;
		else if (c >= '0' && c <= '9')
			nu++;
		else if (c == ' ')
			spa++;
		else
			oth++;
	}
	cout << "字母的个数是" << le<<endl;
	cout << "空格的个数是" <<spa<< endl;
	cout << "数字的个数是" <<nu<< endl;
	cout << "其他字符的个数是" <<oth<< endl;
}