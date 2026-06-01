#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main() {

    char name[20]; //이름 
    int  sid;
    char dept[30];

    // 1. 스트림 생성 + 파일 열기 
    ifstream fin("hello.txt");

    // 2. 파일 열림 확인 
    if(!fin) {
        cout<<"파일 열기 실패"<<endl;
        return 1;
    }

    // 3. 파일 내용 읽기 
    // (1)공백으로 구분해서 읽기 
    //fin >> name >> sid >> dept;
    //(2)get()을 파일 전체 읽기 
    /*
    char ch;
    
    while(fin.get(ch)) {
        cout<<ch;
    }
    */

    //(3) getline()으로 한 줄씩 읽기 
    string str;
    while(getline(fin, str)) {
        cout<<str;
    }

    // 화면 출력
    /*
    cout<<name<<endl;
    cout<<sid<<endl;
    cout <<dept<<endl;
    */

    fin.close();
}