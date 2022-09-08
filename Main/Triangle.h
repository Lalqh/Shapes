#pragma once
#include "Shape.h"
#include <iostream>

using namespace std;

class Triangle : public Shape
{
public:
	Triangle(int size);
	void draw();
};

