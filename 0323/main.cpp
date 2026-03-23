#include <iostream>
#include "Circle.h"
using namespace std;

int main(){
    Circle circleArray[3]={Circle(10),Circle(20),Circle(30)}; //Circle 클래스의 객체 배열 선언
    //Circle circleArray[3](56); // 이거는 당연히 안됨
    /*
    Circle pizza(20), donut; //Circle 클래스의 객체 pizza와 donut 선언
    //donut.radius = -10;//멤버 변수에 값 대입
    Circle *p;
    p = &donut;
    donut.setRadius(-15);
    cout<<"피자의 면적은 "<<pizza.getArea()<<endl; //멤버 함수 호출
    cout<<"도넛의 면적은 "<<donut.getArea()<<endl; //멤버 함수 호출
    cout<<"도넛의 면적은 "<<p->getArea()<<endl; //멤버 함수 호출
    */
    return 0;
}
