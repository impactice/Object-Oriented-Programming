#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

void print(int n) {cout<<n<<" ";}

int main() {
    vector<int> v = {1,2,3,4,5};
    //일반 함수 전달
    for_each(v.begin(),v.end(),print);
    //람다식 전달
    for_each(v.begin(),v.end(), [](int n){cout<<n<<" ";});

    double pi = 3.14;
    //람다식 선언과 호출 
    //[캡쳐리스트] (매개변수리스트)->리턴타입{함수내용};
    auto sum = [](int x, int y) {cout<<"합 : "<<x+y<<endl;};
    auto calc = [pi](int r)->double{return pi*r*r;};
    sum(22,33);
    sum(1,2);
    cout<<calc(5);
}