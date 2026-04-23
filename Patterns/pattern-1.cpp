/*


 *  *  *  *  *
 *  *  *  *  *
 *  *  *  *  *
 *  *  *  *  *
 *  *  *  *  *


*/
# include<iostream>

void build_pattern(int, int);

int main() {
    build_pattern(5, 5);
    return 0;
}

void build_pattern(int row, int col) {
    int start{0}, end{};
    for (; start < row; start++) {
        for (end = 0; end < col; end++) {
            std::cout << " * ";
        }
        std::cout << std::endl;
    }
}
