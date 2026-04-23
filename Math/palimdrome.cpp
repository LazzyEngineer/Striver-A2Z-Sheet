#include<iostream>

int reverse_integer(const int number) {
    int n = number;
    int res = 0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    int number = 7887;
    int reverse = reverse_integer(number);
    if (number == reverse) {
        std::cout << "Palimdrome Found." << std::endl;
    } else {
        std::cout << "Palimdrome not Found." << std::endl;
    }
    return 0;
}
