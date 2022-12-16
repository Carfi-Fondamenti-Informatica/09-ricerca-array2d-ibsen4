#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    char a[10][20];
    char b[20];
    int pos = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            a[i][j] = ' ';
            b[j] = ' ';
        }
    }
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    cin >> b;


    if (funzione(a, b, pos)) {
        cout << pos;
    } else { cout << "non presente"; }

    return 0;
}
