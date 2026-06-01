#include <iostream>
#include <fstream>
using namespace std; 

int main() {
    //파일 스트림 생성, 파일 열기 
    ifstream fin("dog.jpg", ios::in | ios::binary);
    ofstream fout("copydog.jpg",ios::out | ios::binary);

    if(!fin || !fout) {
        cout<<"파일 오류!"<<endl;
        return 1;
    }

    char buf[1024];
    while(fin.read(buf, sizeof(buf))) {
        //fin에서 읽은 만큼 fout에 쓰기 
        fout.write(buf, fin.gcount());
    }
    fout.write(buf, fin.gcount()); //마지막 남은 데이터 처리

    cout<<"복사 완료"<<endl;

    fin.close();
    fout.close();
}