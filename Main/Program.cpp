#include "Program.h"

void Program::run()
{
	int op;

	// Declaración de los objetos

	Shape * square;
	Shape * rhombus;
	Shape * triangle;

	do
	{
		cout << "\tBienvendio a el programa...\n";
		cout << "\t1. Dibujar cuadrado \n";
		cout << "\t2. Dibujar rombo \n";
		cout << "\t3. Dibujar triangulo \n";
		cout << "\t4. Salir\n";
		cout << "\tDigite su opcion: ";
		cin >> op;

		switch (op)
		{
		case 1: 
			cout << endl;
			square = new Square(requestSize());
			square->draw();
			break;
		case 2:
			cout << endl;
			rhombus = new Rhombus(requestSize());
			rhombus->draw();
			break;
		case 3:
			cout << endl;
			triangle = new Triangle(requestSize());
			triangle->draw();
			break;
		case 4:
			cout << "Gracias por usar el programa...";
			break;

		default:
			cout << endl;
			cout << "No existe ese numero de opcion";
			break;
		}

	} while (op!=4);
}

int Program::requestSize()
{
	int size;
	cout << "Ingrese el tamaño que desea para su figura: ";
	cin >> size;
	cout << endl;
	return size;
}
