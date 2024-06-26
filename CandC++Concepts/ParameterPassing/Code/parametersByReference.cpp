#include <iostream>

using namespace std;

int swap(int &a, int &b) {
    int aux;
    aux = a;
    a = b;
    b = aux;

    return 0;
}

int main() {
    int a, b;

    a = 10;
    b = 20;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    swap(a,b);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

}