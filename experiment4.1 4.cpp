#include <iostream>
using namespace std;
const int maxN = 80;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int i = 0, j = 0, k = 0;
	while (i < size1 && j < size2) {
		if (list1[i] < list2[j]) {
			list3[k++] = list1[i++];
		}
		else {
			list3[k++] = list2[j++];
		}
	}
	while (i < size1) {
		list3[k++] = list1[i++];
	}
	while (j < size2) {
		list3[k++] = list2[j++];
	}
}
int main()
{
	int size1;
	int size2;//定义长度
	cout << "Enter list1:" << endl;
	cin >> size1;//输入长度
	int* list1 = new int[size1];
	for (int i = 0;i < size1;i++) { cin >> list1[i]; }//创建动态数组1
	cout << "Enter list2:" << endl;
	cin >> size2;//输入长度2
	int* list2 = new int[size2];
	for (int i = 0;i < size2;i++) { cin >> list2[i]; }//创建动态数组2
	int* list3 = new int[size1 + size2];//创建动态数组3
	merge(list1,size1,list2,size2,list3);//调用函数
	for (int i = 0;i < size1 + size2;i++) { cout << list3[i]<<"\t"; }//输出数组3
	delete[]list1;
	delete[]list2;
}

