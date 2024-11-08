#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	char alp;
	cout << "ÇëÊäÈë×Ö·û" << endl;
	cin >> alp;
	int ascllValue = static_cast <int>(alp);
    int blp = alp;
	if (blp >= 97 && blp <= 122) {
		char clp = alp - 32;
		cout << clp;
	}
	else {
		cout << blp;

	}

}