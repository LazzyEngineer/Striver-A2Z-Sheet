#include<iostream>
void build_pattern(const int row,int data) {
    int ascii=data;
    int i,j,k;
    for (i=1;i<=row;i++) {
        for (j=1;j<=row-i;j++) {
            std::cout<<"_";
        }
        for (j=0;j<=i-1;j++) {
            std::cout<<static_cast<char>(ascii+j);
        }
        for (j=i-2;j>=0;j--) {
            std::cout<<static_cast<char>(ascii+j);
        }
        for (j=1;j<=row-i;j++) {
            std::cout<<"_";
        }
        std::cout<< std::endl;
    }

}
int main() {
    build_pattern(4,65);
    return 0;
}