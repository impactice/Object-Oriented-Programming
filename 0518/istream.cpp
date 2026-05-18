#include<iostream>
using namespace std;

int main() {
    // int ch = cin.get();
    int ch;
    // EOF가 나올 때까지 문자 읽기
    while ((ch = cin.get()) != EOF) {
        cout.put(ch);
        if (ch == '\n')
            break;
    }

    // ② istream& get(char& ch) – eof() 함수로 종료 확인
    char c;
    while (true) {
        cin.get(c);
        if (cin.eof()) break;
        cout.put(c);
        if (c == '\n') break;
    }
}
