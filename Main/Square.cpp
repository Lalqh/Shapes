#include "Square.h"



Square::Square(int size) : Shape(size)
{
}

void Square::draw()
{
    char op;

    cout << "Desea que su cuadrado este relleno? (S/N): ";
    cin >> op;

    if (op == 'S' || op == 's') {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; ++j) {
                cout << "*";
            }
            cout << "\n";
        }
    }
    else
    {
        cout << "\n";
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == 0 || j == 0 || (i == size - 1) || (j == size - 1)) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}
