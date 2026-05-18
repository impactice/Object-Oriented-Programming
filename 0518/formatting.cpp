#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // 조작자 
    cout << showbase;
    for (int i =0; i< 50; i+=5) {
        cout <<setw(8)<<setfill('.')<<dec<<i;
        cout <<setw(8)<<setfill(' ')<<oct<<i;
        cout <<setw(8)<<setfill(' ')<<hex<<i<<endl;
    }
    // 포맷 함수
    cout.width(10);
    cout.fill('*');
    cout<<30<<endl; //10진수 출력 
    cout.width(10);
    cout.precision(5);
    cout << 11.0/3.0 << endl;
    //모팻 플래그
    cout.unsetf(ios::dec); // 10진수 출력 해제 
    cout.setf(ios::hex | ios::showbase); //16진수 출력 세팅
    cout<<30<<endl;
    //cout.setf(ios::showbase);
    //cout<<30<<endl;
    cout.precision(5);
    cout << 11.0/3.0 << endl;
}