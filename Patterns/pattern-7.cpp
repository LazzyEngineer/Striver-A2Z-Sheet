# include<iostream>

void build_pattern(const int);

int main() {
    build_pattern(5);
    return 0;
}

void build_pattern(const int row) {
    for (int i = 1; i <= row; i++) {
        for (int z = 0; z < (row - i); z++) {
            std::cout << "_" << " ";
        }
        for (int j = 1; j <= (i * 2) - 1; j++) {
            std::cout << "* ";
        }
        for (int z = 0; z < (row - i); z++) {
            std::cout << "_" << " ";
        }
        std::cout << std::endl;
    }
}
