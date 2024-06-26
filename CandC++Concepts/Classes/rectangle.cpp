#include <iostream>

using namespace std;

class Rectangle {
    private:
        int length;
        int height;
    public:
        Rectangle();
        Rectangle(int l, int h);
        int area();
        int perimeter();
        int getLength();
        int getHeight();
        void setLength(int l);
        void setHeight(int h);
        ~Rectangle();
};

Rectangle::Rectangle() {
    length = 1;
    height = 1;
}

Rectangle::Rectangle(int l, int h) {
    length = l;
    height = h;
}

int Rectangle::area() {
    return length*height;
}

int Rectangle::perimeter() {
    return length*2+height*2;
}

int Rectangle::getLength() {
    return length;
}

int Rectangle::getHeight() {
    return height;
}

void Rectangle::setLength(int l) {
    length = l;
}

void Rectangle::setHeight(int h) {
    height = h;
}

Rectangle::~Rectangle() {
    cout << "Destructor" << endl;
}

int main() {
    Rectangle r = Rectangle(10,5);

    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    cout << "Length: " << r.getLength() << endl;
    cout << "Height: " << r.getHeight() << endl;
    cout << "Setting lenght to 15" << endl;
    r.setLength(15);
    r.setHeight(10);
    cout << "Setting height to 10" << endl;
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    cout << "Length: " << r.getLength() << endl;
    cout << "Height: " << r.getHeight() << endl;
}



