#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() const {
        cout << "Drawing a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a circle." << endl;
    }
};

class Square : public Shape {
public:
    void draw() const override {
        cout << "Drawing a square." << endl;
    }
};

int main() {
    Circle circle;
    Square square;

    cout << "Drawing the circle:" << endl;
    circle.draw();

    cout << "\nDrawing the square:" << endl;
    square.draw();

    return 0;
}
