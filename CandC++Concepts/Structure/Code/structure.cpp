#include <iostream>

using namespace std;

struct Rectangle {
    int lenght;
    int height;
};

struct Card {
    int face;
    int shape;
    int color;
};

int main() {
    Rectangle r = {10,5};

    cout << "Area: " << r.lenght*r.height << endl;


    Card deck[50];

    deck[0].face = 1;
    deck[0].shape = 0;
    deck[0].color = 0;

    cout << deck[0].face << deck[0].shape << deck[0].color << endl;
}