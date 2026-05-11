// 이거 시험에 나온 적이 있음
#include <iostream>
using namespace std;
class Base {
    int a;
protected: 
    void setA(int a) { this -> a = a;}
public: 
    void showA() {
        cout<<"base class"<<endl;
    }
};
class Derived : private Base{
    int b;
protected: 
    void setB(int b) {this->b =b;}
public: 
    void showB() {
        showA(); // 이거는 된다
        cout<<"dervied class"<<endl;
        
    }
};

int main() {
    Derived x;
    //x.setA(10); //안됨
    //x.setA(10); // 안됨
    //그럼 뭘 쓸 수 있나?
    x.showB();
}