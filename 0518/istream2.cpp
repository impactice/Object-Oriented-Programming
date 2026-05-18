#include<iostream>
using namespace std;

int main() {
    char str1[80],str2[80];

    /*
    cin.get(str1, 80);
    cout << str1;

    cin.ignore(1);  //'\n'을 제거

    cin.get(str2, 80);
    cout << str2;
    */

    cin.getline(str1,80);
    cout << str1 << endl;
    cin.getline(str2,80);
    cout << str2 << endl;
}