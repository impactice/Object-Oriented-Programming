#include<iostream>
using namespace std;

// 출력 스트림 조작자 
ostream& fivestar(ostream& outs){
    return outs << "*****";
}
ostream& rightarrow(ostream& outs){
    return outs << "----->";
}
ostream& beep(ostream& outs){
    return outs << " \a";
}

class Point{
    int x,y;
    public:
        Point(int x = 0, int y = 0) : x(x),y(y) {}
        friend ostream& operator <<(ostream& stream, Point p);
        friend istream& operator>>(istream& stream, Point p);
};

// <<연산자 : "(x,y)" 형식으로 출력하도록 오버로딩
ostream& operator <<(ostream& stream, Point p) {
    stream << "(" << p.x <<", "<<p.y<<")";
    return stream;

}

istream& operator>>(istream& stream, Point p) {
    cout << "x좌표 :";
    stream >> p.x;
    cout << "y좌표 :";
    stream >> p.y;
    return stream;
}

int main() {
    //Point p(3,4);
    Point p,q;
    cin >> p; //x,y좌표를 입력
    //cout << p << endl; //(x,y) 형태로 출력
    cout << p << ", "<< q << endl;
    cout << fivestar << rightarrow << beep << endl;
}