#include <stdio.h>
#include <stdlib.h>
#include "lab01_eje4.h"


int main(int argc, char *argv[])
{	
	//declaracion de variables y de la matriz
	int i,j,primo,fil,col;
	int **matriz;
	//se asignan valores a filas y columnas por medio de funciones
	fil = in_filas();
	col = in_col();	
	//se reserva espacio de memoria para la matriz
	matriz= (int **) malloc (fil*sizeof(int *));
	for (i=0; i<fil; i++)
	{
		matriz[i]=(int *) malloc(col*sizeof(int));
		
	}
	
	//se pobla la matriz con valores aleaorios por medio de funcion
	poblar_matriz(fil,col,matriz);
	//se muestra la matriz luego de ser poblada
	printf("\nmatriz creada poblada aleatoriamente de %d filas y %d columnas\n",fil,col);
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	//se evalúan los valores de cada elemento de la matriz mediante la funcion
	//"evalua_primo" y si el resultado de la evaluacion es verdadero se reemplaza
	//el elemento por cero
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			primo = evalua_primo(matriz[i][j]);
			if (primo == 0)
			{
				matriz[i][j]=0;
			}
		}
		
	}
	//muestra la matriz resultante despues de la evaluacion
	printf("\nmatriz modificada\n");
	for(i=0;i<fil;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
