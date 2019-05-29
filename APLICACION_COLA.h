#pragma once
#include <iostream>
#include <string>
#include "COLA.h"
using namespace std;
using namespace System::Windows::Forms;
class APLICACION_COLA:public COLA
{

public:
	APLICACION_COLA(void);
	void Ordenar();
	void Insertar(DataGridView^ grilla);
	void Insertar_ordenado(DataGridView^ grilla);
	void Mostrar(DataGridView^ grilla);
	int Longitud();
	void Eliminar_par();
};


