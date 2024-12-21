#include <iostream>
using namespace std;


int main() {
    int start = 41; 
    int rows = 5;   

    for (int i = 1; i <= rows; i++)
    { 
        int num = start;             
        for (int j = 1; j <= i; j++) 
        { 
            cout << num << " ";
            num++;
        }
        cout << endl; 
    }
}