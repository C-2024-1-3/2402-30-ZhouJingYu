#include<iostream>
using namespace std;
int z;
int d;
int & gcd(int m, int n);
int & gcd(int m, int n) {
	z = n;
	while (m % n != 0) {
		z = m % n;
		m = n;
		n = z;
	}
	return z;
}
int & max(int m, int n)
{
	int c = gcd(m, n);
	d = m * n / c;
	return d;
}
int main()
{
	int a, b;
	cin >> a >> b;
	int& h = gcd(a, b);
	int& s = max(a, b);
	cout << "这两个数的最大公约数为" << h << endl;
	cout << "最大公倍数为" << s << endl;
	return 0;
}