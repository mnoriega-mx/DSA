#include <iostream>

using namespace std;

struct Rectangle {
    int length,height;
};

int area(Rectangle r) {
    int a = r.length*r.height;
    return a;
}

void increaseHeight(Rectangle &r) {
    r.height++;
}

void increaseLength(Rectangle &r) {
    r.length++;
}


int main() {

}