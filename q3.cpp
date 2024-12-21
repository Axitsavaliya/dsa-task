
#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 == 1) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl; 
    }

    return 0;
}