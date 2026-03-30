#include <iostream>
#include <windows.h>
void swap(int a, int b) {
    int temp = a;
    a = b; 
    b = temp;
}

void swap_addr(int *a, int *b) {
    int temp = *a;
    *a = *b; 
    *b = temp;
}

void swap_ref(int &a, int& b){
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    SetConsoleCP(CP_UTF8);        // 입력도 UTF-8
    SetConsoleOutputCP(CP_UTF8);  // 출력 UTF-8
    int m = 2, n = 3;
    std::cout<<"바꾸기 전: m = " <<m<<", n = "<<n<<std::endl;
    //swap(m,n);
    //swap_addr(&m, &n);
    swap_ref(m,n);
    std::cout<<"바꾼 후 : m = "<<m<<", n =" <<n<<std::endl;
}