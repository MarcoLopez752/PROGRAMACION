#pragma once


#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "math.h"
#include <stdlib.h>
#include "Naturales.h"
#include <time.h>

using namespace std;

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

	int Random()
	{
		srand(time(NULL));
		entero= 1 + rand() % (100);
		return entero;

	}


	int Adivinanza(Naturales Dato)
	{
		do
		{
			cout << "Digite un numero: ";
			cin >> entero;
			if (entero > Dato.entero)
			{
				cout << "Digite un numero menor" << endl;
			}
			if (entero < Dato.entero)
			{
				cout << "Digite un numero mayor" << endl;
			}
		}

		while (entero != Dato.entero);
		
		cout << "Felicidades adivinaste el numero" << endl;
		return 0;
	}

};
