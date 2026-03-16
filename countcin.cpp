#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    // 출력: count
    std::cout << "이름을 입력하세요: ";

    // 입력: cin 
    std::string name;
    std::cin >> name;

    std::cout << "안녕하세요, " << name << "님!" << std::endl;

    return 0;
}