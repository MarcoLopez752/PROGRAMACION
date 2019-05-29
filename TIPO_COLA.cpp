#include "StdAfx.h"
#include "TIPO_COLA.h"


TIPO_COLA::TIPO_COLA(void)
{
}
int TIPO_COLA::Get_numero()
{
 return numero;
}
void TIPO_COLA::Set_numero(int num)
{
  numero=num;
}
bool TIPO_COLA::Igual(int num)
{
	if(numero==num) {return true;}
	else { return false;}

}
bool TIPO_COLA::Mayor(int num)
	{
	if(numero>num) {return true;}
	else {return false;}

}
bool TIPO_COLA::Menor(int num)
{
	if(numero<num) {return true;}
	else {return false;}

}
bool TIPO_COLA::Mayor_igual(int num)
{
	if(numero>=num) {return true;}
	else {return false;}

}
