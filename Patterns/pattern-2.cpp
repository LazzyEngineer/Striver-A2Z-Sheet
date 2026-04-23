//
// Created by debad on 18-04-2026.
//
# include<iostream>

void build_pattern(const int);

int main() {
    build_pattern(5);
    return 0;
}

void build_pattern(const int row) {
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << " * ";
        }
        std::cout << std::endl;
    }
}
