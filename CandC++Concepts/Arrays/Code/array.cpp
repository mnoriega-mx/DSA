#include <iostream>

using namespace std;

int main() {
    int A[10] = {2,4,6,8,10,12,14};

    cout << sizeof(A) << endl;
    cout << A[9] << endl;

    for (int i=0;i<10;i++) {
        cout << A[i] << endl;
    }

    for (int x:A) {
        cout << x << endl;
    }

    int n;
    cout << "Enter size: ";
    cin >> n;
    int B[n];

    for (int i=0; i<n; i++) {
        cout << "-> ";
        cin >>B[i];
    }

    for (int x:B) {
        cout << x << endl;
    }



    return 0;
}