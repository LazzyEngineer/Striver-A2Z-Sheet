#include<iostream>
using namespace std;
void build_pattern(const int row,int data) {
    int i,j;
    for (i=1;i<=row;i++) {
        int ascii_counter=data;
        for (j=1;j<=i;j++) {

            std::cout<<static_cast<char>(ascii_counter++)<<"";
        }
        std::cout<<endl;
    }



}
int main(){
    build_pattern(5,65);
    return 0;
}
