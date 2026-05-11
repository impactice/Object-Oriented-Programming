#include <iostream>
#include <windows.h>
#include "Circle.h"
using namespace std;

int main(){
    SetConsoleCP(CP_UTF8);        // 입력도 UTF-8
    SetConsoleOutputCP(CP_UTF8);  // 출력 UTF-8
    Circle circleArray[3]={Circle(10),Circle(20),Circle(30)}; //Circle 클래스의 객체 배열 선언
    //인덱스로 접근
    for(int i=0; i< 3; i++) {
        cout<<"Circle "<<i+1<<"의 면적은" <<circleArray[i].getArea()<<endl; // 멤버 함수 호출
    }
    // 포인터로 접근 
    Circle *p = circleArray; // 배열 이름 = 배열의 첫 번째 요소의 주소
    for(int i=0; i< 3; i++) {
        cout<<"Circle "<<i+1<<"의 면적은" <<p->getArea()<<endl; // 멤버 함수 호출
    }
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
