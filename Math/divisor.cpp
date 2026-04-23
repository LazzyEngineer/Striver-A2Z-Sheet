#include <iostream>

void factors(const int n) {
    int number = n;
    for (int i = 1; i * i <= number; i++) {
        if (number % i == 0) {
            std::cout << i << " " << number / i << std::endl;
        }
    }
}

int main() {
    int number;
    if (!(std::cin >> number) || number <= 0) return 0;
    factors(number);

    return 0;
}
