# include<iostream>

void build_pattern(const int);

int main() {
    build_pattern(5);
    return 0;
}

void build_pattern(const int row) {
    for (int i = 1; i <= row; i++) {
        int expr = 2 * (row - i) + 1;
        for (int j = 1; j <= i; j++) {
            std::cout << "_" << " ";
        }
        for (int z = 1; z <= expr; z++) {
            std::cout << "*" << " ";
        }
        for (int j = 1; j <= i; j++) {
            std::cout << "_" << " ";
        }
        std::cout << std::endl;
    }
}
