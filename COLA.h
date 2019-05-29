#pragma once
#include <iostream>
#include <string>
#include "TIPO_COLA.h"
using namespace std;
const int N=30;
class COLA
{
	TIPO_COLA cola[N];
	int frente,final;
public:
	COLA(void);
	bool Frente(TIPO_COLA &x);
	bool Cola_llena();
	bool Cola_vacia();
	bool Insertar(TIPO_COLA x);
	bool Eliminar(TIPO_COLA &x);
	COLA Apuntador_cola();
	void Apuntador_cola(COLA p);
};
