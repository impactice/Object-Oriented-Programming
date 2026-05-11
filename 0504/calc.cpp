#include <iostream>
using namespace std;

//추상 클래스 
class Calculator{
public: 
    virtual int add(int a, int b) =0;
    virtual int substract(int a, int b) =0;
    virtual double average(int a[], int size) =0;
};

class GoodCalc : public Calculator {
public : 
    // 상속받은 순수 가상함수 구현 
    virtual int add(int a, int b) {
        return a+b;
    }
    virtual int substract(int a, int b) {
        return a-b;
    }
    virtual double average(int a[], int size) {
        double sum = 0;
        for(int i=0; i<size; i++) {
            sum += a[i];
        }
        return sum/size;
    }

};

int main() {
    int a[] = {1,2,3,4,5};
    Calculator* p = new GoodCalc();
    cout << p->add(2,3)<<endl;
    cout << p->substract(2,3)<<endl;
    cout << p->average(a,5)<<endl;
    delete p;
}