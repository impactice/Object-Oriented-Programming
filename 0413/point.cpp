#include<iostream>
using namespace std;

class Point{
    int x, y; // 접근: private 
public: 
    void set(int x, int y) {
        this->x=x;
        this->y=y;
    }
    void showPoint(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};

//Point를 상속받은 ColorPoint 클래스 
class ColorPoint : public Point{
    string color;
public: 
    void setColor(string c){
        this->color =c;
    }
    void showColorPoint() {
        cout<<color<<":";
        showPoint();
    }
};

int main() {
    // Point p;
    // p.set(1,2);
    // p.showPoint();

    ColorPoint cp;
    ColorPoint *pDer = &cp;

    //upcasting
    Point *pBase = pDer;

    pDer->set(3,4);
    pBase->showPoint();
    pDer->setColor("yellow");
    pBase->showPoint();
    pDer->showColorPoint();

    ColorPoint *pDown = (ColorPoint*)pBase; //down casting
    pDown->showColorPoint();

    // cp.set(10,20);
    // cp.setColor("red");   // 색상 설정
    // cp.showColorPoint();  // 색상과 좌표 출력
}
