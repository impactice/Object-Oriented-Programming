#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct Student{
    char name[20];
    int id;
    double score;
};

const string DB_FILE = "student.bin";

// 학생 추가 함수 
void addStudent(const Student &s){
    ofstream fout(DB_FILE, ios::binary | ios::app); // ostream → ofstream
    if(!fout){
        cerr << "파일 오류";
        return;
    }
    fout.write((const char*)(&s), sizeof(Student));
    fout.close();
    cout<<"저장완료:"<<s.name<<endl;
}

//총 학생 수 반환 
int countStudents() {
    ifstream fin(DB_FILE, ios::binary);
    if(!fin){
        cerr << "파일 오류";
        return 0; // 반환값 필요
    }
    fin.seekg(0, ios::end);
    int total = (int)fin.tellg() / sizeof(Student);
    fin.close();
    return total;
}

//n번째 레코드 직접 접근(임의 접근)
bool readRecord(int n){
    ifstream fin(DB_FILE, ios::binary); // 변수명 통일
    if(!fin){
        cerr << "파일 오류";
        return false;
    }
    int total = countStudents();
    if(n<0 || n>=total){
        cout<<"인덱스 범위 초과";
        return false;
    }
    fin.seekg((streampos)n * sizeof(Student), ios::beg); // sizeOf → sizeof, Studnt 오타 수정
    Student s;
    fin.read((char*)&s, sizeof(Student));
    cout<<"["<<n<<"] "<<s.name<<" "<<s.id<<" "<<s.score<<endl; // 출력 구문 수정
    fin.close();
    return true;
}

int main() {
    //데이터 추가 
    //Student s = {"김민준", 20231001, 95.8}; // 배열 초기화 방식 수정
    //addStudent(s);

    addStudent({"김민준", 20231001, 95.5});
    addStudent({"이서연", 20231002, 88.0});
    addStudent({"박지우", 20231003, 72.3});
    addStudent({"최유진", 20231004, 91.0});

    cout << "\n총 학생 수: " << countStudents() << "\n\n";

    readRecord(3);
}
