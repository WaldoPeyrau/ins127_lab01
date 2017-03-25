//FUNCIONES PARA LOS EJERCICIOS DEL LABORATORIO 1 
#include <stdio.h>
#include <stdlib.h>
/* ******* funciones del ejercicio 4 ******* */

//funcion que pobla los campos del arreglo 
void poblar_arreglo(int n,int *arr)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("ingrese el valor %d del arreglo \n",i+1);
		scanf("%d", &arr[i]);
	}	
}
//funcion que ordena de forma decreciente los valores recibidos
void swap(int *punt1, int *punt2)
{	
	
	int paso = 0;
	if (*punt1 < *punt2)
	{
		paso = *punt1;
		*punt1 = *punt2;
		*punt2 = paso;
	}
}

/* *****funciones del ejercicio 2 ******* */
//funcion que solicita el numero de filas de la matriz
int in_filas (void)
{	
	int fila;
	printf("ingrese número de filas: \n");
	scanf("%d", &fila);
	return fila;
}
//funcion que solicita el numero de columnas de la matriz
int in_col (void)
{	
	int columna;
	printf("ingrese número de columnas: \n");
	scanf("%d", &columna);
	return columna;
}
//funcion que pobla todos los campos de la matriz aleatoriamente con
//valores entre 1 y 100 
void poblar_matriz(int fila,int columna,int **matriz)
{
	int i=0,j=0;
	for (i=0;i<fila;i++)
	{
		for (j=0;j<columna;j++)
		{
			matriz[i][j]= rand () %101;
		}
	}
}
//funcion que evalua si el número ingresado en primo
int evalua_primo(int n)
{
	int i=1,cont=0;
	for (i=1;i<=n;i++)
	{
		if (n%i == 0)
		{
			cont=cont+1;
		}
	}
	if (cont > 2)
	{
		return 0;
	}
	else
	{
		return 1;
	}
			
}

/* ******** funciones del ejercicio 3 ******* */
//funcion que solicita ingresar año de nacimiento
int ingreso_anio(void)
{
	int anio;
	printf("ingrese su año de nacimiento: \n");
	scanf("%d",&anio);
	
	return anio;
}
//funcion que solicita ingresar mes de nacimiento
int ingreso_mes(void)
{
	int mes;
	printf("ingrese su mes de nacimiento: \n");
	scanf("%d",&mes);
	
	return mes;
}
//funcion que solicita ingresar dia de nacimiento
int ingreso_dia(void)
{
	int dia;
	printf("ingrese su dia de nacimiento: \n");
	scanf("%d",&dia);
	
	return dia;
}
//funcion que valida si el dia ingresado es válido para el mes correspondiente
int valida_dia_mes(int dia,int mes)
{
	int valido;
	if (mes == 1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
	{
		if (dia <=31 && dia >=1)
		{
			valido = 1;
		}
		else 
		{
			valido = 0;
		}
	}
	else if (mes==4 || mes==6 || mes==9 || mes==11)
	{
		if (dia <=30 && dia >=0)
		{
			valido = 1;
		}
		else
		{
			valido = 0;
		}
	}
	else 
	{
		if (dia <=28 && dia >=0)
		{
			valido = 1;
		}
		else
		{
			valido = 0;
		}
	}
	return valido;
}
//funcion que suma los dígitos del número recibido como parámetro
int calculo_NM(int suma)
{
	int nm =0;

	while (suma > 0)
	{	
		nm = nm + (suma%10);
		suma = suma/10;	
	}
	return nm;
}

