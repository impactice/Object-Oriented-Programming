#include <iostream> 
//#include <windows.h> 

int main() {
    //system("chcp 65001");
    std::cout << "이름을 입력하세요: ";

    std::string name;
    std::cin >> name;

    std::cout << "안녕하세요, " << name << "님!" << std::endl;

    return 0;
}