#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);        // 입력도 UTF-8
    SetConsoleOutputCP(CP_UTF8);  // 출력 UTF-8
    string s;
    cout<<"문장을 입력하세요(한글 안 됨) : ";
    getline(cin, s); //문자열 입력 받기 
    cout <<"길이: "<<s.length()<<endl; //문자열 길이 출력
    cout<<"첫 번째 문자 : "<<s[0]<<endl; //첫 번째 문자 출력 
    cout<<"마지막 번째 문자 : "<<s[s.length()-1]<<endl; //마지막 문자 
    cout<<"뒤집은 문자열 : ";
    for(int i = s.length()-1; i>= 0; i--) {
        cout<<s[i]; //문자열 뒤집어서 출력
    }
    cout<<endl;
    return 0;
}