#include<iostream>
using namespace std;
int listSize = 10;
double h;
double list[10];
double shunxu()
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				h = list[j];
				list[j] = list[j + 1];
				list[j + 1] = h;
				changed = true;
			}
		}
	} while (changed);
	return list[10];
}
int main() {
	for (int i = 0;i < 10;++i) {
		cin >> list[i];
	}
	shunxu();
	for (int i = 0;i < 10;++i)
	{
		cout << list[i]<<"  ";
	}
}
