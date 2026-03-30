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


//TODO: readRadius() 함수를 작성하세요 
// - 매개변수: Circle에 대한 참조 
//- 동작: cin으로 정수를 입력받아 c.setRadius() 호출

void ReadRadius(Circle &c) {
    int r;
    cout<<"반지름 입력 : ";
    cin >> r;
    c.setRadius(r);

}

int main() {
    SetConsoleCP(CP_UTF8);        // 입력도 UTF-8
    SetConsoleOutputCP(CP_UTF8);  // 출력 UTF-8
    //Circle c;
    //c = getCircle();
    Circle donut;
    ReadRadius(donut);
    cout << "donut의 면적 = "<<donut.getArea() << endl;
    //cout<<c.getArea()<<endl;
    
    //Circle waffle(30);
    //increase(waffle);
    //increase_addr(&waffle);
    //cout<<waffle.getRadius()<<endl;
}