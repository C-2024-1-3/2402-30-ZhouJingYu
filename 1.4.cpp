#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint << endl;//<<oct;
    cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//Ϊʲô���Ϊ-2?:  ԭ��65534����short���ȣ�����Ӹ�����ʼ����
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16�������
	cout << "��testUnintת��Ϊ�˽������" <<oct<<testUnint<< endl;//��testUnintת��Ϊ�˽������
	float b = 3.75;
	int a = b;
	cout << "3.75ת��Ϊ����Ϊ" << a << endl;//3.75�Ӹ�����ת��Ϊ��������ȥ��С������
	
	system("pause");
	return 0;
}