// class Shape {
// protected:
//     virtual void draw() { }   // 인터페이스 역할 (파생 클래스에서 구현)
// };

// class Circle : public Shape {
// protected:
//     virtual void draw() { /* 원을 그린다 */ std::cout << "draw circle" << std::endl;}
// };

// class Rect : public Shape {
// protected:
//     virtual void draw() {std::cout << "draw rectangle" << std::endl; /* 사각형을 그린다 */ }
// };

// class Line : public Shape {
// protected:
//     virtual void draw() {std::cout << "draw line" << std::endl; /* 선을 그린다 */ }
// };

// int main() {
// // 핵심: Shape* 하나로 모든 도형을 다룰 수 있다
//     void paint(Shape* p) {
//         p->draw();   // p가 가리키는 객체에 오버라이딩된 draw() 호출
//     }

//     paint(new Circle());   // Circle::draw() 호출
//     paint(new Rect());     // Rect::draw() 호출
//     paint(new Line());     // Line::draw() 호출
// }
#include <iostream>
#include <memory>

// 인터페이스 역할 (파생 클래스에서 구현)
class Shape {
public:
    virtual void draw() = 0;   // 순수 가상 함수 → 반드시 파생 클래스에서 구현
    virtual ~Shape() {}        // 소멸자도 가상으로 선언 (안전한 다형성)
};

class Circle : public Shape {
public:
    virtual void draw() { /* 원을 그린다 */ std::cout << "draw circle" << std::endl; }
};

class Rect : public Shape {
public:
    virtual void draw() { std::cout << "draw rectangle" << std::endl; /* 사각형을 그린다 */ }
};

class Line : public Shape {
public:
    virtual void draw() { std::cout << "draw line" << std::endl; /* 선을 그린다 */ }
};

// 핵심: Shape* 하나로 모든 도형을 다룰 수 있다
void paint(std::unique_ptr<Shape> p) {
    p->draw();   // p가 가리키는 객체에 오버라이딩된 draw() 호출
}

int main() {
    paint(std::make_unique<Circle>());   // Circle::draw() 호출
    paint(std::make_unique<Rect>());     // Rect::draw() 호출
    paint(std::make_unique<Line>());     // Line::draw() 호출
}
