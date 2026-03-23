#include <iostream>
#include <iomanip> //setprecision 이거 쓸 수 있게 해줌
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);        // 입력도 UTF-8
    SetConsoleOutputCP(CP_UTF8);  // 출력 UTF-8
    int n;
    cout<<"정수의 개수 입력 : ";
    cin>>n;

    //동적 배열 생성하기 
    int *arr = new int[n];
    if(!arr) {
        cout<<"메모리 할당 실패" << endl;
        return 1; // 프로그램 종료
    }

    //n개의 정수를 동적 배열에 저장하기 
    for(int i =0; i< n; i++) {
        cout<<i<<"번째 정수 입력 : ";
        cin>>arr[i];
    }

    //합계와 평균을 출력하기 
    cout<<fixed<<setprecision(2); //소수점 둘째 자리까지 출력 // 자리수 정하는 거임
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];

    }
    cout<<"합계 : "<<sum<<endl;
    cout<<"평균 : "<<(double)sum/n<<endl;

    //동적 배열 해제하기 
    delete[] arr;
    return 0;
}