#include <iostream>
#include<iomanip>
using namespace std;
int gcd(int m, int n);
int gcd(int m, int n) {
	int z = n;
	while (m % n != 0) {
		z = m % n;
		m = n;
		n = z;
	}
	return z;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << "这两个数的最大公约数为" << gcd(a,b)<<endl;
	int c = gcd(a, b);
	int d = a * b / c;
	cout << "最大公倍数为" << d << endl;
	return 0;
	


}