//
// Created by debad on 21-04-2026.
//
/*
 *  12345%10=5
 *  1234%10=4
 *  123%10=3
 *  12%10=2
 *  1%10=1
 *
 *
 */
#include <algorithm>
#include<iostream>
#include<cmath>
static int counter_digits;
namespace solution {
    void extract_digits(const int number) {
        counter_digits = 0;
        if (number < 0) {
            std::cout << "Number less than Zero." << std::endl;
            return;
        }
        int n = number;
        while (n > 0) {
            std::cout << n % 10;
            counter_digits++;
            n /= 10;
        }
        std::cout << " : Digits Count: " << counter_digits << std::endl;
    }

    void extract_digits_optimized(const int number) {
        std::cout << "Count of Digits of Number:" << number << " is " << static_cast<int>(log10(number) + 1) << std::endl;
    }
}


int main() {
    solution::extract_digits(12345);
    solution::extract_digits(100000);
    solution::extract_digits(02345);
    solution::extract_digits_optimized(12345);
    solution::extract_digits_optimized(100000);
    solution::extract_digits_optimized(02345);
    return 0;
}
