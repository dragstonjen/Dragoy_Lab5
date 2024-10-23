#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int matrix[3][3] = {
        {1, 5, 2},
        {-3, 8, 6},
        {5, 7,-4},
    };

    cout << "Початкова матриця:" << endl;
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            cout << matrix[x][y] << " "; 
        }
        cout << endl;
    }

    for (int x = 0; x < 3; x++) {
        matrix[x][x] = 0;
    }

    cout << "Матриця після змін: " << endl;
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            cout << matrix[x][y] << " "; 
        }
        cout << endl;
    }

    return 0;
}
