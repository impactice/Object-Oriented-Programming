#include<iostream>

using namespace std;

// 두 값을 교환하는 함수 — 타입마다 별도로 작성해야 함
/*
void myswap(int& a, int& b) {
    int tmp;
    tmp = a; a = b; b = tmp;
}
  
void myswap(double& a, double& b) {
    double tmp;
    tmp = a; a = b; b = tmp;
}
*/ //template<class T> 이게 추가 되면서 이게 필요가 없음

class Circle {
    int radius;
public:
    Circle(int radius = 1) { this->radius = radius; }
    int getRadius() { return radius; }
};

template<class T> //T라는 이름의 제너릭 타입 선언
void myswap(T& a, T& b) {
    T tmp;
    tmp = a; a = b; b = tmp;
}


int main(){
    int a=5,b =10;
    cout<<"a="<<a<<", "<<"b="<<b<<endl;
    myswap(a,b);
    cout<<"a="<<a<<", "<<"b="<<b<<endl;

    double c = 1.5, d=10.4;
    cout<<"c="<<c<<", "<<"d="<<d<<endl;
    myswap(c,d);
    cout<<"c="<<c<<", "<<"d="<<d<<endl;

    Circle donut(5), pizza(20);
    myswap(donut, pizza); // T → Circle 로 구체화
    cout << "donut반지름=" << donut.getRadius()
         << ", pizza반지름=" << pizza.getRadius() << endl;
}