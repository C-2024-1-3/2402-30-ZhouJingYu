#include <iostream>
#include<cstring>
#include<cmath>
using namespace std;
int parseHex(string hex) {
	int len = hex.length();
	int z = 0;
	int b = 1;
	for (int i = len - 1;i >=0;i--)
	{
		if (hex[i] >= '0' && hex[i] < '9')
		{
			z += (hex[i] - '0') * b;
			b *= 16;
		}
		else if (hex[i] >= 'A' && hex[i] <= 'F')
		{
			z += (hex[i] - 'A'+10) * b;
			b *= 16;
		}
		else if (hex[i] >= 'a' && hex[i] <= 'f')
		{
			z += (hex[i] - 'a' + 10) * b;
			b *= 16;
		}
		else
		{
			cout << "这是无效字符！" << endl;
			return 0;
		}
	}
	return z;
}
int main() {
	string hex;
	cout << "请输入一个16进制的数字" << endl;
	cin >> hex;
	int p=parseHex(hex);
	cout << "转化后的十进制数字为：" << p << endl;
	

}