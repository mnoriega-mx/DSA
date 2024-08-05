#include <iostream>

using namespace std;

int pow(int n, int p) {
    if (p > 0) {
        return pow(n,p-1)*n;
    }
    return 1;
};

int main() {
    int r = pow(2,4);
    cout << r << endl;
}