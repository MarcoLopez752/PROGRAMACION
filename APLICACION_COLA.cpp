#include "StdAfx.h"
#include "APLICACION_COLA.h"

APLICACION_COLA::APLICACION_COLA(void)
{
	COLA();
}
int APLICACION_COLA::Longitud()
{
   int i=0;
   TIPO_COLA x;
   COLA aux=Apuntador_cola();
   while(aux.Cola_vacia()==false)
   {
	aux.Eliminar(x);
    i++;
   }
   return i;
}

void APLICACION_COLA::Mostrar(DataGridView^ grilla)
{
   int i=0;
   TIPO_COLA x;
   COLA aux; 
   int lon=Longitud();
   grilla->ColumnCount=lon;
   grilla->RowCount=1;
   aux=Apuntador_cola();
   while(i<lon)
   { 
     aux.Eliminar(x);
     grilla->Rows[0]->Cells[i]->Value=System::Convert::ToString(x.Get_numero());
     i++;
   }
}

//Ordena de menor a mayor
 
void APLICACION_COLA::Ordenar() 
{
  TIPO_COLA x,y,z;
  COLA aux1;
  int i=0;
  while(Cola_vacia()==false) 
  {
	  COLA::Eliminar(x);
	  COLA aux2;
	  while(Cola_vacia()==false)
	  {
	     COLA::Eliminar(y);
		  if(y.Menor(x.Get_numero())==true)
	      {
             
			 z=y;
			 y=x;
			 x=z;
		  }
		  aux2.Insertar(y);
	  }
	   aux1.Insertar(x);
	   COLA::Apuntador_cola(aux2);  
  }

  COLA::Apuntador_cola(aux1);
}
void APLICACION_COLA::Eliminar_par()
{
	TIPO_COLA x;
	COLA aux;
	while(Cola_vacia()==false)
	{
	  Eliminar(x);
	  if((x.Get_numero()%2)!=0) {aux.Insertar(x);}
	}
	while(aux.Cola_vacia()==false)
	{
	    aux.Eliminar(x);
		COLA::Insertar(x);
	}

}

void APLICACION_COLA::Insertar(DataGridView^ grilla)
{
  int i;
  i=0;
  TIPO_COLA x;
  while(i<grilla->ColumnCount)
  {
   x.Set_numero(System::Convert::ToInt32(grilla->Rows[0]->Cells[i]->Value)); 
   COLA::Insertar(x);
   i++;
  }

}

void APLICACION_COLA::Insertar_ordenado(DataGridView^ grilla)
{
  int i;
  i=0;
  //COLA aux;
  TIPO_COLA x,y,z;
  bool estado; 
COLA aux,aux1;
  while(i<grilla->ColumnCount)
  {  
	COLA aux,aux1;
	x.Set_numero(System::Convert::ToInt32(grilla->Rows[0]->Cells[i]->Value));
	if(Cola_vacia()==true) { aux.Insertar(x);}
	else
	{
		while(Cola_vacia()==false)
		{
			COLA::Eliminar(y);
			if (y.Menor(x.Get_numero())==true)
			{
			  aux.Insertar(y);
			}
			else 
			{   
				aux.Insertar(x);
			    while(Cola_vacia()==false)
				{
					aux1.Insertar(y);
					COLA::Eliminar(y);
				}
			}
		} 
		if (y.Menor(x.Get_numero())==true)
		{ aux.Insertar(x);}
		else { aux1.Insertar(y);}
		
	   }
		while(aux.Cola_vacia()==false)
		{
		   aux.Eliminar(y);
           COLA::Insertar(y);
		}
		while(aux1.Cola_vacia()==false)
		{
		   aux1.Eliminar(y);
		   COLA::Insertar(y);
		}
   i++; 
  }
  
} //fin



