#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int *p;
    p = &a;

    cout << *p << endl;;


    int A[5] = {2,4,6,8};
    int *p2;
    p = A;

    cout << p[0] << endl;
}