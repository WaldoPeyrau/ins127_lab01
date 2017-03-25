#include<stdio.h>

int main() 
{
	int a, b;
	char cadena[8];
	int c;
	
	a=7; b=14; c=128; //en esta linea faltaba un punto y coma ";"
	printf("asigne un valor a la cadena de caracteres ");
	scanf("%s",cadena);
	printf("la cadena es %s \n",cadena); //en esta linea tambien faltaba un ";" 
	printf("el valor asignado a las variables es: \n");
	printf("\ta: %d", a);
	printf("\tb: %d", b);
	printf("\tc: %d", c);
	
	return 0;
	/* al asignar el valor "Buenos dias", solo se guarda en la cadena el string 
	 * Buenos, perdiendose la otra parte de lo ingresado */ 
}
