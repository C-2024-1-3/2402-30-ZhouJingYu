#include<iostream>
using namespace std;
void shunxu( int * list,int len)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < len - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				int h;
				h = list[j];
				list[j] = list[j + 1];
				list[j + 1] = h;
				changed = true;
			}
		}
	} while (changed);
}
int main() {
	int len;
	cout <<"���������鳤��" << endl;
	cin >> len;
	int * list = new int[len];
	cout << "����������Ԫ��" << endl;
	for (int i = 0;i < len;i++)
	{
		cin >> list[i];
	}
	shunxu(list, len);
	cout<<"������һ��Ԫ��Ϊ" << list[0] << endl;
	cout << "��������һ��Ԫ��Ϊ" << list[len - 1] << endl;
	delete[]list;
}