#include <iostream>


void build_pattern(const int);

int main() {
    build_pattern(5);
    return 0;
}

void build_pattern(const int row) {
    int i,j,z;
    for (i = 1; i <= (row * 2) - 1; i++) {
        if (i <=5) {
            for (j = 1; j <= i; j++) {
                std::cout << "* ";


            }
            std::cout << std::endl;
        }
        if (i > 5) {
            {
                for (z = 1; z <= (row * 2) - i; z++) {
                    std::cout << "* ";
                }
                std::cout << std::endl;
            }
        }
    }
}
