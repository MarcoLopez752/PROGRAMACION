#include "StdAfx.h"
#include "COLA.h"


COLA::COLA(void)
{
	frente=-1;
	final=-1;
}

bool  COLA::Frente(TIPO_COLA &x )
{
	if(Cola_vacia()==false) {
	 x=cola[frente + 1];
	 return true;
	}
	else {return false;}


}
bool COLA::Cola_llena()
{
	if(final==N-1) {return true;}
	else {return false;}
}
bool COLA::Cola_vacia()
{
	if(frente==final) {return true;}
	else {return false;}
}
bool COLA::Insertar(TIPO_COLA x)
{
	if(Cola_llena()==true) {return false;}
	else
	{
        final++;
		cola[final]=x;
	    return true;
	}

}
bool COLA::Eliminar(TIPO_COLA &x)
{
	if(Cola_vacia()==true) {return false;}
	else
	{   frente++;
		x=cola[frente];
	    return true;
	}
}
COLA COLA::Apuntador_cola()
{
  return *this;
}
 void COLA::Apuntador_cola(COLA p)
{
  *this=p;
}
