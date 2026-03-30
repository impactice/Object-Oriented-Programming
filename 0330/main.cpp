#include "Circle.h"
#include <iostream>
#include <windows.h>
using namespace std;

void increase(Circle c){
    int r = c.getRadius();
    c.setRadius(r+1);
}

void increase_addr(Circle *c) {
    int r = c->getRadius();
    c->setRadius(r+1);
}

Circle getCircle() { //객체 리턴
    Circle tmp(30);
    return tmp; //tmp의 복사본이 반환
}

int main() {
    SetConsoleCP(CP_UTF8);        // 입력도 UTF-8
    SetConsoleOutputCP(CP_UTF8);  // 출력 UTF-8
    Circle c;
    c = getCircle();
    cout<<c.getArea()<<endl;
    //Circle waffle(30);
    //increase(waffle);
    //increase_addr(&waffle);
    //cout<<waffle.getRadius()<<endl;
}