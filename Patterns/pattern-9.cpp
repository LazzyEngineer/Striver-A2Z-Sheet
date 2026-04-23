# include<iostream>

void build_upper_pattern(const int);

void build_lower_pattern(const int);


int main() {
    build_upper_pattern(5);
    build_lower_pattern(5);
    return 0;
}

void build_lower_pattern(const int row) {
    for (int i = 1; i <= row; i++) {
        int expr = 2 * (row - i) + 1;
        for (int j = 1; j < i; j++) {
            std::cout << " ";
        }
        for (int z = 1; z <= expr; z++) {
            std::cout << "*";
        }
        for (int j = 1; j <= i; j++) {
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}


void build_upper_pattern(const int row) {
    for (int i = 1; i <= row; i++) {
        for (int z = 0; z < (row - i); z++) {
            std::cout << " ";
        }
        for (int j = 1; j <= (i * 2) - 1; j++) {
            std::cout << "*";
        }
        for (int z = 0; z < (row - i); z++) {
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}
