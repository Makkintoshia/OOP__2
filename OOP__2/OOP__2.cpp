/*
Задание №2
Создать абстрактный базовый класс с виртуальной функцией – площадь.
Создать производные классы: прямоугольник, круг, прямоугольный треугольник, трапеция со своими функциями площади.
*/
#include <iostream>
#include <time.h>
using namespace std;

class BaseClass {
public:
    virtual double Area() = 0;
    virtual void Show() = 0;
    virtual ~BaseClass() {}
};

class Rectangle :public BaseClass {
    double A;
    double B;
public:
    Rectangle(double a, double b) : A(a), B(b) { }
    ~Rectangle() {}
    double Area() { return A * B; }
    void Show() { cout << "Rectangle Area = " << Area() << endl; }
};

class Circle : public BaseClass
{
    double C;
public:
    Circle(double c) : C(c) {}
    ~Circle() {}
    double Area() { return 3.14 * C * C; }
    void Show() { cout << "Circle Area = " << Area() << endl; }
};

class RightTriangle : public BaseClass
{
    double D;
    double E;
public:
    RightTriangle(double d, double e) : D(d), E(e) { }
    ~RightTriangle() {}
    double Area() { return (D * E) / 2; }
    void Show() { cout << "Right Triangle Area = " << Area() << endl; }
};





int main() {
    Rectangle A(2, 3);
    A.Show();
    Circle B(2);
    B.Show();
    RightTriangle C(2, 3);
    C.Show();
  
}