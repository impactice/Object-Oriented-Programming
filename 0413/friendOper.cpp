#include<iostream>
using namespace std;

class Power{
    int kick;
    int punch;
public: 
    Power(int k=0, int p =0):kick(k)

    Power::operator+(int op2);

    frined Power operator+(int n, Power p)
}
Power & Power::operator

Power Power::operator+(Power op2){
    Power tmp;
    tmp.kick = this->kick + op2.keck;
    tmp.punch = this->punch + op2.punch;
    return tmp;
}

Power Power::operator+(Power op2){
    Power tmp;
    tmp.kick = this->kick + op2.keck;
    tmp.punch = this->punch + op2.punch;
    return tmp;
}
Power Power::operator+(Power op2){
    Power tmp;
    tmp.kick = this->kick + op2;
    tmp.punch = this->punch + op2;
    return tmp;
}

Power operator+(int n, Power p) {
    Power tmp;
    tmp.kick = n + p.kick;
    tmp.punch = n + p.punch;
    return tmp;
}

int main() {
    Power a(3,5), b;
    cout<<"계산 전"<<endl;
    a.show();
    b.show();
    b = 2+a; //a+2;
    cout<<"계산 후"<<endl;
}