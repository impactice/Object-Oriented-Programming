#include <iostream>
using namespace std;

// ❌ 가상 소멸자 없는 경우 (위험)
class BadBase {
public:
    // ~BadBase() { cout << "~BadBase()" << endl; }
    virtual ~BadBase() { cout << "~BadBase()" << endl; } // 가상소멸자 
};
class BadDerived : public BadBase {
    int* data;
public:
    BadDerived() { data = new int[100]; }      // 동적 메모리 할당
    ~BadDerived() {
        delete[] data;   // 이게 호출되지 않으면 메모리 누수!
        cout << "~BadDerived()" << endl;
    }
};

int main() {
    BadBase* p1 = new BadDerived();
    delete p1;
}