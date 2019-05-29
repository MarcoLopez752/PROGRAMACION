#pragma once
#include <iostream>
#include <string>
using namespace std;
class TIPO_COLA
{
  int numero;

public:
	TIPO_COLA(void);
	int Get_numero();
	void Set_numero(int num);
	bool Igual(int num);
	bool Mayor(int num);
	bool Menor(int num);
	bool Mayor_igual(int num);
};
