#include<iostream>
using namespace std;
#include<cstring>
int indexOf(const char s1[], const char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for (int i = 0;i <= len2 - len1;i++)
	{
		int j;
		for (j = 0;j < len1;j++)
		{
			if (s2[i + j] != s1[j]) { break; }
		}
		if (j == len1) { return i + 1; }
	}
		return -1;
}
int main() {
	char s1[1000], s2[1000];
	cout << "Enter the first string:" << endl;
	cin >> s1;
	cout << "Enter the second string:" << endl;
	cin >> s2;
	cout << "indexOf(“" << s1 << "”, “" << s2 << ")is" << indexOf(s1, s2) << endl;
}