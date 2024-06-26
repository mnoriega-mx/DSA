#include <iostream>

using namespace std;

template<class T>
class Arithmetic {
    private:
        T a;
        T b;
    public:
        Arithmetic(T a, T b);
        T add();
        T sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b) {
    this->a = a;
    this->b = b;
}

template<class T>
T Arithmetic<T>::add() {
    return a+b;
}

template<class T>
T Arithmetic<T>::sub() {
    return a-b;
}

int main() {
    Arithmetic<int> ar_int(10,5);
    Arithmetic<float> ar_float(10.99,5.44);
    Arithmetic<char> ar_char('A','B');

    cout << "Add result: " << ar_int.add() << endl;
    cout << "Subtract result: " << ar_int.sub() << endl;

    cout << "Add result: " << ar_float.add() << endl;
    cout << "Subtract result: " << ar_float.sub() << endl;

    // using int() to display ASCII values as integers
    cout << "Add result: " << int(ar_char.add()) << endl;
    cout << "Subtract result: " << int(ar_char.sub()) << endl;
}