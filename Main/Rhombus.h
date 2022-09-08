#pragma once
#include "Shape.h"
#include <iostream>
using namespace std;

class Rhombus : public Shape
{
public:
	Rhombus(int size);
	void draw();
};

