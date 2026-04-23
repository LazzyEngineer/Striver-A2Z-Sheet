//
// Created by debad on 21-04-2026.
//
#include<iostream>

void reverse_integer(const int number) {
    int n = number;
    int res = 0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    std::cout << res << std::endl;
}

int main() {
    reverse_integer(12345);
    reverse_integer(10000);
    reverse_integer(4310);


    return 0;
}
