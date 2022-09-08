#include "Triangle.h"

Triangle::Triangle(int size) : Shape(size)
{
}

void Triangle::draw()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
