
**T1-1 ⭐** 다음 중 옳은 것을 모두 고르시오.

① `cout`은 `<stdio.h>` 헤더에 정의되어 있다.

② `endl`은 줄을 바꾸면서 출력 버퍼를 비운다.

③ `cin`으로 여러 변수를 입력받을 때 `>>` 를 연속으로 쓸 수 있다.

④ `using namespace std;` 없이도 `std::cout`으로 출력할 수 있다.

내가 생각한 답: 1,3,4 

**T1-2 ⭐** 다음 코드의 출력 결과를 쓰시오.

```cpp
#include <iostream>
using namespace std;
int main() {
    int n = 7;
    cout << "n=" << n << ", n*2=" << n * 2 << endl;
    cout << (n % 2 == 0 ? "짝수" : "홀수") << endl;
}
```

내가 생각한 답: n = 7, n*2 = 14 홀수 

T1-3 ⭐⭐ endl과 '\n'을 각각 써야 하는 상황을 하나씩 설명하고 그 이유를 서술하시오. 

내가 생각한 답: endl은 깔끔하게 줄을 바꿀 때 쓰고 \n은 줄바꿈할 때 쓴다

**T1-4 ⭐⭐** 다음 두 코드의 차이를 설명하시오.

```cpp
// (A)
using namespace std;
cout << "Hello";

// (B)
std::cout << "Hello";
```

내가 생각한 답: a 코드는 std를 먼저 선언을 해서 cout를 쓸 때 std를 선언을 안 해도 되지만 b는 cout를 쓸 때 std 선언을 계속 해주어야 한다 


### 🔸 실습 문제

**P1-1 ⭐** 이름(`string`), 나이(`int`), 키(`double`)를 입력받아 다음과 같이 출력하는 프로그램을 작성하시오.

```
이름: Hong
나이: 22
키: 175.5
``` 

#include<iostream> 
using namespace std;
int main() {
	string name = "Hong";
	int age = 22;
	double tall=175.5;

	cout << "이름: " << name << "나이: " << age << "키: " << tall <<endl;

}


**P1-2 ⭐⭐** 아래 코드는 C-스트링과 string 클래스를 비교합니다. 빈칸을 채워 완성하시오.

```cpp
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    // C-스트링 방식
    char cs1[20] = "Hello";
    char cs2[20] = "World";
    __________(cs1, cs2);               // 문자열 연결
    cout << cs1 << endl;                // HelloWorld

    // string 클래스 방식
    string s1 = "Hello";
    string s2 = "World";
    string s3 = __________;            // 문자열 연결
    cout << s3 << endl;                 // HelloWorld

    // 비교
    cout << (s1 __ s2) << endl;        // 0 (false)
}
```

내가 생각한 답: 
char cs1(cs1, cs2);
string s3 = s1+s2;

**P1-3 ⭐⭐⭐** 사용자로부터 문장을 입력받아, 다음 정보를 출력하는 프로그램을 작성하시오.

- 입력한 문자열의 길이
- 첫 번째 문자와 마지막 문자
- `"the"`가 포함되어 있는지 여부 (있으면 시작 인덱스 출력, 없으면 "없음" 출력)

```
입력: The quick brown fox
길이: 19
첫문자: T, 끝문자: x
"the" 위치: 없음
```

내가 생각한 답: 
#include<iostream>
using namespace std;

int main() {
	string space; 
	cout << "입력: " >> 
	cout << "길이: " 
	cout << "첫문자"
}


