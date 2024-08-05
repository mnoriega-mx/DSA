#include <iostream>

using namespace std;

int pow(int n, int p) {
    if (p > 0) {
        return pow(n,p-1)*n;
    }
    return 1;
};

int pow1(int n, int p) {
    if (p > 0) {
        if (p%2 == 0) {
            return pow1(n*n,p/2);
        }
        else {
            return n*pow1(n*n,(p-1)/2);
        }
    }
    return 1;
}

int main() {
    int r = pow1(2,9);
    cout << r << endl;
}