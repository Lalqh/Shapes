#include "Rhombus.h"

Rhombus::Rhombus(int size) : Shape(size)
{
}

void Rhombus::draw()
{
    for (int j = 0; j < size; ++j) {
        for (int i = 0; i < size - j - 1; ++i)
            cout << " ";
        for (int i = 0; i < 2 * j + 1; ++i)
            cout << "*";
        cout << endl;
    }

    for (int j = size - 2; j >= 0; --j) {
        for (int i = 0; i < size - j - 1; ++i)
            cout << " ";
        for (int i = 0; i < 2 * j + 1; ++i)
            cout << "*";
        cout << endl;
    }
}
