#include <iostream>
#include <vector>
#include <cmath>

// Use a reference (&) so the changes persist outside this function
void count_digits(int number, std::vector<int> &digits) {
    while (number > 0) {
        digits.push_back(number % 10);
        number = number / 10;
    }
}

void check_armstrong(int number) {
    std::vector<int> digits;
    count_digits(number, digits);

    int n = digits.size();
    double sum = 0;

    for (int digit: digits) {
        sum += pow(digit, n);
    }

    // Cast sum to int for comparison
    if (number == sum) {
        std::cout << number << " is an Armstrong number." << std::endl;
    } else {
        std::cout << number << " is not an Armstrong number." << std::endl;
    }
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    if (!(std::cin >> number)) {
        std::cout << "Invalid Input" << std::endl;
        return 1;
    }

    if (number >= 0) {
        check_armstrong(number);
    } else {
        std::cout << "Please enter a non-negative integer." << std::endl;
    }

    return 0;
}
