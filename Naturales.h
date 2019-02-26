#pragma once
//1,2,3,4,6,8,

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

	int entero, insertar;
	int a[50], b[50];

public:

	int get_entero()
	{
		return entero;
	}

	void set_entero(int e)
	{
		entero = e;
	}

	void  Escuchar()
	{
		cin >> entero;
	}

	void Ver()
	{
		cout << entero << endl;
	}

	//Ejercicio 1//

	void Leer()
	{
		cout << "Ingrese el numero a unir" << endl;
		cin >> entero;
	}



	void Mostrar()

	{
		cout << "La union de digito es: " << entero << endl;
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

	//Ejercicio 2//

	bool Ciclo(int a, int b) 
	{
		bool cont = false;
		int c = 0;
		while (a > 0 && c<2)
		{
			if (b == a % 10)
			{
				c = c + 1;
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

	//Ejerccio 3//
	Naturales Invertir()
	{
		Naturales b;
		int a = 0;
	
		while (entero > 0)
		{

			a = (a * 10) + (entero % 10);
			entero = entero / 10;
			
		}
		
		b.entero = a;
		return b;
	}

	//Ejercicio 4//

	int Mayor(int a)
	{
		int i = -1, c = a;
		while (c > 0)
		{
			if (i < c % 10)
			{
				i = c % 10;
				if (i == 9) break;
			}
			c = c / 10;
		}
		return i;
	}

	int Selector(int a, int b)
	{
		int f = a, x = 0, y = 1;
		while (entero > 0) {
			if (b != entero % 10)
			{
				x = x + (entero % 10) * y;
				y = y * 10;
			}
			entero = entero / 10;
		}
		return x;
	}

	Naturales Eliminar()
	{
		Naturales a;
		a.entero = Selector(entero, Mayor(entero));
		return a;
	}

	//Ejercicio 5//

	void LeerD()
	{
		cin >> entero;
		cin >> insertar;
	}

	Naturales Insertar()
	{
		Naturales r;
		int x = entero, y = insertar, d, a = 0, b = 1;
		int contador = 0;

		while (x > 0 || contador == 0)
		{
			d = x % 10;
			if ((y > d && contador == 0) || x == 0)
			{
				a = a + y * b;
				b = b * 10;
				contador = 1;
			}
			a = a + d * b;
			x = x / 10;
			b = b * 10;
		}

		r.entero = a;
		return r;
	}

	//Ejercicio 6//

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

	//Ejercicio 7//

	void LeerHoras()
	{
		cin >> entero;
		for (int i = 0; i < entero; i++)
		{
			cout << "Horas trabajadas. Interno " << i + 1 << ": " << endl;
			cin >> a[i];

		}
	}


	void Tabla()
	{
		for (int i = 0; i < entero; i++)
		{
			b[i] = a[i] * 20;
		}

		cout << " ____________________________________________________________" << endl;
		std::cout << "|-------------------Planilla de sueldos----------------------|" << std::endl;
		std::cout << "|No                   Horas de trabajo                 Sueldo|" << std::endl;
		std::cout << "|------------------------------------------------------------|" << std::endl;
		for (int i = 0; i < entero; i++)
		{
			std::cout << "|" << i + 1 << "                           " << a[i] << "h                         " << b[i] << "bs |" << std::endl;

		}
		cout << "|____________________________________________________________|";
	}

	//Ejercicio 8//

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

	//Ejercicio 10//

	void Automorfico()
	{
		int p, n, d, c;
		int contador = 0;
		int cont = 0;
		while (contador == 0)
		{
			p = entero * entero;
			n = entero;
			d = Contar_digitos();
			c = pow(10, d);
			if (p%c == n)
			{
					Ver();
			}
			entero++;
			cont++;
			if (cont == 1000)
			{
				contador = 1;
			}
		}


	}
};
