#include <iostream>
using namespace std;

template <class T>
void print(T array[], int n){
    for(int i=0; i<n; i++) {
        cout << array[i]<<'\t'<<endl;
    }
    cout<<endl;
}

//탬플릿보다 우선순위가 높다
void print(char array[], int n){
    for(int i=0; i<n; i++) {
        cout << (int)array[i]<<'\t'<<endl;
    }
    cout<<endl;
}

int main(){
    int x[] ={1,2,3,4,5};
    char c[5]={1,2,3,4,5};

    print(x,5);
    print(c,5);
}