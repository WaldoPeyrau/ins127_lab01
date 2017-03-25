#include <stdio.h>
#include "lab01_eje4.h"


int main(int argc, char *argv[])
{	
	//declaracion de variables
	int anio,mes,dia,valida,numero_magico;
	//se solicita ingresar año de nacimiento y se valida si cumple con lo 
	//solicitado en el ejercicio
	anio = ingreso_anio();
	while (anio <= 0)
	{
		printf("debe ingresar un valor válido para el año \n");
		anio = ingreso_anio();
		
	}
	//se solicita ingresar mes y se valida si cumple con lo 
	//solicitado en el ejercicio	
	mes = ingreso_mes();
	while (mes <= 0 || mes >12)
	{
		printf("debe ingresar un valor válido para el mes (1 - 12) \n");
		mes = ingreso_mes();
		
	}
	//se solicita ingresar dia de nacimiento 
	dia = ingreso_dia();	
	//se valida mediante funcion si cumple con lo indicado en el ejercicio
	valida = valida_dia_mes(dia,mes);
	while (valida == 0)
	{
		printf("debe ingresar un valor válido para el dia  \n");
		dia = ingreso_dia();
		valida = valida_dia_mes(dia,mes);
	}
	
	printf("su fecha de nacimiento es %d/%d/%d :\n",anio,mes,dia);
	//calcula el número mágico mediante funcion
	numero_magico = calculo_NM(anio+mes+dia);
	while (numero_magico > 9)
	{
		numero_magico = calculo_NM (numero_magico);
	}
	printf("su número mágico es %d :",numero_magico);
}
