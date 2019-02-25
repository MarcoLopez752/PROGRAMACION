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

	void  Escuchar()
	{
		cin >> entero;
	}

	void Mostrar()

	{
		cout << "La union de digito es: " << entero << endl;
	}

	void Ver()
	{
		cout << entero << endl;
	}

	bool Mayor(Naturales y)
	{
		if (y.entero < entero)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	int Contar_digitos()
	{
		int i = entero;
		int contar = 0;
		while (i > 0)
		{
			i = i / 10;
			contar = contar + 1;
		}

		return contar;

	}

	Naturales Unir(Naturales y)
	{
		Naturales c;
		int i = entero;
		int conta = y.Contar_digitos();

		while (conta > 0)
		{
			i = i * 10;
			conta = conta - 1;

		}

		i = i + y.entero;
		c.entero = i;
		return c;
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
		entero = 1 + rand() % (100);
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

	int Elevar()
	{
		entero = entero * 2;
		return entero;
	}

	int invertir(int I)
	{
		int v, a = I, n = 0;
		while (a > 0)
		{						
			n = n * 10 + a % 10;
			a = a / 10;
		}
		return n;
	}



	Naturales Palindromo()
	{
		Naturales a;
		int b;
		b = invertir(entero);
		a.entero = b;
		return a;
	}

	bool Ciclo(int a, int b) //repeticion//
	{
		bool cont = false;
		int c = 0;
		while (a > 0 && c<2)
		{
			if (b == a % 10)
			{
				c=c+1;
			}
			if (c > 1)
			{
				cont = true;
				break;
			}
			a = a / 10;
		}
		return cont;
	}

	int guardar(int n, int d)
	{
		int x = n, y = 0, v = 1;
		while (x > 0) {
			if (d != x % 10)
			{
				y = y + (x % 10) * v;
				v = v * 10;
			}
			x = x / 10;
		}
		return y;
	}

	Naturales No_Repetidos()
	{
		Naturales y;
		for (int i = 0; i < 10; i++)
		{
			if (Ciclo(entero, i))
			{
				entero = guardar(entero, i);
			}
		}
		y.entero = entero;
		return y;
	}

};
