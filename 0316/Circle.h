

class Circle{
private:
    // 선언부
    int radius; //멤버 변수
public:
    Circle(); //기본 생성자 
    Circle(int r); //매개변수 있는 생성자 //매개 변수를 넣은 거 근데 매개 변수 없는거랑 같이 쓰고 싶으면 위에 것도 써야 함
    ~Circle();
    void setRadius(int r);
    double getArea();  //멤버 함수 (프로토타입, 원형)
};