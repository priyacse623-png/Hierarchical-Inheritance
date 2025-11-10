 #include <iostream>
 using namespace std;
 class Shape {
 protected:
    float dimension1, dimension2;
 public:
    Shape(float d1 = 0, float d2 = 0) : dimension1(d1), dimension2(d2) {}
    virtual float calculateArea() = 0; 
 };
 class Circle : public Shape {
 public:
    Circle(float radius) : Shape(radius) {}
    float calculateArea() {
        return 3.14 * dimension1 * dimension1;
    }
 };
 class Rectangle : public Shape {
public:
    Rectangle(float length, float breadth) : Shape(length, breadth) {}
    float calculateArea() {
        return dimension1 * dimension2;
    }
 };
 class Triangle : public Shape {
 public:
    Triangle(float base, float height) : Shape(base, height) {}
    float calculateArea() {
        return 0.5 * dimension1 * dimension2;
    }
 };
 int main() {
    Shape* s1 = new Circle(5);
    Shape* s2 = new Rectangle(4, 6);
    Shape* s3 = new Triangle(3, 7);
    cout << "Circle Area: " << s1->calculateArea() << endl;
    cout << "Rectangle Area: " << s2->calculateArea() << endl;
    cout << "Triangle Area: " << s3->calculateArea() << endl;
    delete s1;
    delete s2;
    delete s3;
    return 0;
}
 
