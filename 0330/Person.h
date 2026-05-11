class Person {
	char* name; // 동적 메모리 포인터
	int id; 
public: 
	Person(int id, const char* name);
	//Person(const Person& person); // 깊은 복사 생성자 
    Person(const Person& person);
	~Person();
    void changeName(const char* name);
    void show();
};

// // 깊은 복사 생성자 
// Person::Person(const Person& person) {
// 	this->id = person.id;
// 	int len = strlen(person.name);
// 	this->name = new char[len + 1]; // 새로운 메모리 별도 할당!
// 	strcpy(this->name, person.name); // 내용 복사 
// }

// 디폴트 복사 생성자 (얕은 복사 - 문제 발생!)
// this-> name = erson.name; //주소만 복사 -> 메모리 공유!