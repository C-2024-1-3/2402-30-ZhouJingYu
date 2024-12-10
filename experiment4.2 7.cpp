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
	cout <<"请输入数组长度" << endl;
	cin >> len;
	int * list = new int[len];
	cout << "请输入数组元素" << endl;
	for (int i = 0;i < len;i++)
	{
		cin >> list[i];
	}
	shunxu(list, len);
	cout<<"排序后第一个元素为" << list[0] << endl;
	cout << "排序后最后一个元素为" << list[len - 1] << endl;
	delete[]list;
}