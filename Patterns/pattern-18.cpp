#include<iostream>

void build_pattern(const int row,int data) {
  int ascii=data;
  int i,j;
  for (i=0;i<row;i++) {
    for (j=i;j>=0;j--) {
      std::cout<<static_cast<char>(ascii+row-j-1);
    }
    std::cout<<std::endl;
  }
}

int main() {
  build_pattern(5,65);
  return 0;
}