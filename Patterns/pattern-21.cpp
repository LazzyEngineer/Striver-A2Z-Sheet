# include<iostream>
void build_pattern(const int row,const int col) {
    for (int i=0;i<row;i++) {
        for (int j=0;j<col;j++) {

            if (j==0|| i==0  || j==col-1 || i==row-1) {
                std::cout<<"*";
            }
            else {
                std::cout<<" ";
            }

        }
        std::cout<<std::endl;
    }
}
int main() {
    build_pattern(10,10);
    return 0;

}