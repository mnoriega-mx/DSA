#include <iostream>

using namespace std;

class Arithmetic {
    private:
        int a;
        int b;
    public:
        Arithmetic(int a, int b);
        int add();
        int sub();
};

Arithmetic::Arithmetic(int a, int b) {
    this->a = a;
    this->b = b;
}

int Arithmetic::add() {
    return a+b;
}

int Arithmetic::sub() {
    return a-b;
}

int main() {
    Arithmetic ar(10,5);

    cout << "Add result: " << ar.add() << endl;
    cout << "Subtract result: " << ar.sub() << endl;
}