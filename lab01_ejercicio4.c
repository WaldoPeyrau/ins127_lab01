#include <stdio.h>
#include <stdlib.h>
#include "lab01_eje4.h"
int main(int argc, char *argv[])
{
	//declaracion de variable, puntero y arreglo
	int i,*p1;
	int *arreglo=(int *) malloc(4*sizeof(int));
	//se invoca la funcion que pobla el arreglo con datos
	poblar_arreglo(4,arreglo);
	printf("\narreglo original:\n");
	for (i=0;i<4;i++)
	{
		printf("%d ",arreglo[i]);
	}
	//se asigna al puntero p1 la posicion del primer registro del arreglo
	p1=&arreglo[0];
	//se invoca la funcio SWAP de acuerdo al orden indicado en la 
	//red de ordenamiento
	swap(p1,p1+2);
	swap(p1+1,p1+3);
	swap(p1,p1+1);
	swap(p1+2,p1+3);
	swap(p1+1,p1+2);	
	
	printf("\narreglo modificado:\n");
	for (i=0;i<4;i++)
	{
		printf("%d ",arreglo[i]);
	}
	
}	
		
