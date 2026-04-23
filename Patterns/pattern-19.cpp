# include<iostream>
void upper_half(const int row) {
    int initialspace{0};
    for (int i = 0; i < row; i++) {
        for (int j = 1; j <= row -i; j++) {
            std::cout << "*";
        }
        for (int j = 0; j < initialspace;j++) {
            std::cout<<" ";
        }
        for (int j = 1; j <= row -i; j++) {
            std::cout << "*";
        }
        initialspace+=2;

        std::cout<<std::endl;
    }

}
void lower_half(const int row) {
    int initialspace{2*row-2};
    for (int i=0;i<row;i++) {
        for (int j=0;j<=i;j++) {
            std::cout<<"*";
        }
        for (int j=0;j<initialspace;j++) {
            std::cout<<" ";
        }
        for (int j=0;j<=i;j++) {
            std::cout<<"*";
        }
        initialspace-=2;
        std::cout<<std::endl;
    }

}
void build_pattern(const int row) {
    upper_half(row);
    lower_half(row);
}

int main() {
    build_pattern(5);
    return 0;
}
