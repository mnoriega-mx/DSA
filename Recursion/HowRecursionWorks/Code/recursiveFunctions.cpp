#include <iostream>

using namespace std;

int fun(int x) {
    if (x > 0) {
        cout << x << endl;
        fun(x-1);
    }
    
    return 0;
}

int fun2(int x) {
    if (x > 0) {
        fun2(x-1);
        cout << x << endl;
    }

    return 0;
}

int main() {
    int x = 3;
    fun(x);
    cout << endl;
    fun2(x);
}