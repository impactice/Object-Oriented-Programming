
인코딩 
```
g++ main.cpp Circle.cpp -o main
```

```
.\main.exe
```

한글 파일이 깨진다면..?

```
g++ main.cpp Circle.cpp -o main -fexec-charset=CP949
```


```
#include <iostream>
#include <windows.h>

int main(){
    SetConsoleCP(CP_UTF8);        // 입력도 UTF-8
    SetConsoleOutputCP(CP_UTF8);  // 출력 UTF-8
}
```






```
g++ stringTest.cpp -o stringTest.exe
```

```
.\stringTest.exe
```
