#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for(auto it=v.begin(); it!=v.end(); it++){ //vector<int>::iterator it; 이걸 안 쓰고 auto로 쓸 수 있음
        cout << *it << " ";
    }
    cout <<endl;

    //iteractor를 사용한 순회
    //vector<int>::iterator it;
    /*
    for(it=v.begin(); it!=v.end(); it++){
        cout << *it << " ";
    }
    cout <<endl;
    */

    /*
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout <<endl;
    */  // vector<int>::iterator it;를 추가함으로써 이거 제거 대신 위에꺼로 대처

    v[0] =100;
    int n = v[2];
    v.at(2) = 5;

    /*
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout <<endl;
    */

    //범위 기반 for문 사용가능
    for(auto n : v){
        cout << n << " ";
    }
}