#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint << endl;//<<oct;
    cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:  原因：65534超过short长度，因而从负数开始计算
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	cout << "将testUnint转换为八进制输出" <<oct<<testUnint<< endl;//将testUnint转换为八进制输出
	float b = 3.75;
	int a = b;
	cout << "3.75转换为整数为" << a << endl;//3.75从浮点数转换为整数后舍去了小数部分
	
	system("pause");
	return 0;
}