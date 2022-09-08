#pragma once

#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Rhombus.h"
#include "Triangle.h"
using namespace std;

class Program
{
private:
	int size;

public:
	void run();
	int requestSize();
};

