#include<iostream>
using namespace std;
void build_pattern(const int row) {
    static int counter{1};
    int i,j;
    for (i=1;i<=row;i++) {
        for (j=1;j<=i;j++) {
            std::cout<<counter++<<"";
        }
        std::cout<<endl;
    }



}
int main(){
    build_pattern(10);
    return 0;
}
