#include<iostream>
using namespace std;
void build_pattern(const int row) {
    int i,j,k;
    for (i=1;i<=row;i++) {
        for (j=1;j<=i;j++) {
            cout<<j;
        }
        for (j=1;j<=(row-i)*2;j++) {
            cout<<"_";
        }
        for (j=i;j>=1;j--) {
            cout<<j;
        }
        cout<<endl;
    }

}
int main(){
    build_pattern(4);
return 0;
}
