#include <iostream>
using namespace std;

int main() {
    cout <<"가로 길이 입력 : ";
    
    int width;
    cin >> width;

    cout << "새로 길이 입력 : ";
    int height;
    cin >> height;

    // 사각형의 넓이 구하기
    int area = width*height;
    cout<<"사각형의 넓이는 : " <<area<<endl;
    
    return 0;

}