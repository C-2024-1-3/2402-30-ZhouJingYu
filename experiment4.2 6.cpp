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
			cout << "������Ч�ַ���" << endl;
			return 0;
		}
	}
	return z;
}
int main() {
	string hex;
	cout << "������һ��16���Ƶ�����" << endl;
	cin >> hex;
	int p=parseHex(hex);
	cout << "ת�����ʮ��������Ϊ��" << p << endl;
	

}