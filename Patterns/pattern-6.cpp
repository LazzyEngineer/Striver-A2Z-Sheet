# include<iostream>

void build_pattern(const int);

int main() {
    build_pattern(5);
    return 0;
}

void build_pattern(const int row) {
    for (int i=1;i<=row;i++) {
        for (int j=1;j<=(row-i)+1;j++) {
            std::cout<<j<<" ";
        }
        std::cout << std::endl;

    }
}