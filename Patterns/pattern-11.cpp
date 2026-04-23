#include<iostream>

void build_pattern(const int);

bool alternate_flag(const int flag) {
    if (flag == true) {
        return false;
    }
    return true;
}

int main() {
    build_pattern(100);
    return 0;
}

void build_pattern(const int row) {
    int i, j;
    bool flag;
    // Iterating the rows
    for (i = 1; i <=row; i++) {
        if (i % 2 != 0) {
            flag = false;
            for (j = 0; j < i; j++) {
                flag = !flag;
                std::cout << flag << " ";
            }
            std::cout << std::endl;
        }
        else{
            flag = true;
            for (j = 0; j < i; j++) {
                flag = !flag;
                std::cout << flag<< " ";
            }
            std::cout << std::endl;
        }
    }
}
// #include <iostream>
//
// void build_pattern(const int rows) {
//     for (int i = 1; i <= rows; i++) {
//         // Start with 1 if row is odd, 0 if even
//         bool value = (i % 2 != 0);
//
//         for (int j = 0; j < i; j++) {
//             std::cout << value << " ";
//             value = !value; // Simple toggle
//         }
//         std::cout << std::endl;
//     }
// }
//
// int main() {
//     build_pattern(10);
//     return 0;
// }