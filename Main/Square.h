#pragma once
#include "Shape.h"
#include <iostream>

using namespace std;

class Square : public Shape
{
public:
	Square(int size);
	void draw();
};