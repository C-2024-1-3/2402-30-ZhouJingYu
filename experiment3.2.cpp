
#include <iostream>
#include <vector>

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    std::vector<int> primes;
    int count = 0;
    int num = 2;
    while (count < 200) {
        if (is_prime(num)) {
            primes.push_back(num);
            ++count;
        }
        ++num;
    }
    for (int i = 0; i < primes.size(); ++i) {
        std::cout << primes[i] << " ";
        if ((i + 1) % 10 == 0) std::cout << std::endl;
    }
    std::cout << "������һ����" << std:: endl;
    std::cin >> num  ;
    if (is_prime(num)) { std::cout << "��������" << std::endl; }
    else{ std::cout << "�ⲻ������" << std::endl; }



    return 0;
}
