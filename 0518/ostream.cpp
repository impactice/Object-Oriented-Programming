#include<iostream>
using namespace std;

// 정수를 2진수 형태로 출력하는 함수
void printBinary(int n) {
    for (int i = 7; i >= 0; i--) {
        // 비트 연산으로 각 비트 추출 후 put()으로 출력
        cout.put(((n >> i) & 1) ? '1' : '0');
    }
    cout.put('\n');
}

int main() {
    printBinary(65);
    //put() : 문자 하나씩 출력
    cout.put('H');
    cout.put('i');
    cout.put(33); //ASCII코드 33 : !
    cout.put('\n');

    //put(),write()은 체이닝 가능 : ostream&을 반환하기 때문 
    cout.put('C').put('+').put('+').put(' ');
    // write()로 배열의 첫 6개 문자 출력
    char str[] = "I love programming";
    cout.write(str,6);

    for (int i = 0; i<10; i++) {
        cout.put('*');
    }
    cout.put('\n');
}