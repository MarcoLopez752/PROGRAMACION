#include "stdafx.h"
#include <iostream>
#include "conio.h"


class Naturales
{
private:

	int entero;

public:

	int get_entero()
	{
		return entero;
	}

	void set_entero(int e)
	{
		entero = e;
	}

	void Leer()
	{
		cout << "Ingrese el numero a unir" << endl;
		cin >> entero;
	}

	void Mostrar()

	{
		cout << "La union de digito es: " << entero << endl;
	}

	int Invertir()
	{
		int a = 0;

		while (entero != 0)
		{

			a = (a * 10) + (a % 10);
			a = a / 10;

		}

		return a;

	}




};
