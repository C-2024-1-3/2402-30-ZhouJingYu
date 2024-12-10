#include <iostream>
using namespace std;
int main() {
    int numbers[10];
    cout << "Enter ten numbers:" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> numbers[i];
    }
    cout << "The distinct numbers are: " << endl;
    for (int i = 0; i < 10; ++i) {
        bool judge= false;
        for (int j = 0; j < i; ++j) {
            if (numbers[i] == numbers[j]) {
                judge = true;
                break;
            }
        }
        if (!judge) {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
