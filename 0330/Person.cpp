#include "Person.h"
#include<iostream>
#include<cstring>
//constructor 
// 생성자
Person::Person(int id,  const char* name) {
    this -> id = id;
    int len = strlen(name); // name의 길이 구하기 
    this->name = new char[len+1]; //이름을 저장할 공간을 동적 할당
    strcpy(this->name, name); //name에 문자열 복사
}

// 복사 생성자 - 깊은 복사
Person::Person(const Person& person) {
    this->id = person.id;
    int len = strlen(person.name);
    this->name = new char[len + 1];
    strcpy(this->name, person.name); // 올바르게 복사
}

//소멸자
Person::~Person(){
    if(name) 
        delete[] name; // 동적 할당된 메모리 소멸
}

//이름을 변경하는 함수
void Person::changeName(const char* name){
    if(strlen(name) < strlen(this->name)) {
        return;
    }
    strcpy(this->name, name);

}

void Person::show(){
    std::cout << "id : " << id << ", name : " << name << std::endl;
}