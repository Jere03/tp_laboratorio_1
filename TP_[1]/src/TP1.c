/*
 ============================================================================
 Name        : TP1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"


int main(void) {
	int opcion;
	float primerNum;
	float segundoNum;
	float resulSuma;
	float resulResta;
	float resulMul;
	float resulDiv;
	float resulFactorialA;
	float resulFactorialB;

	int flagUno = 1;
	int flagDos = 1;

	setbuf(stdout, NULL);
	do
	{

		printf("\n---------------------------------------------\n");
		if(flagUno==1)
		{
			printf("Primer operando: A = X\n");
			flagUno = 0;
		}
		else
		{
			printf("Primer operando A = %.2f\n", primerNum);
		}
		if(flagDos==1)
		{
			printf("segundo operando: B = X\n");
			flagDos = 0;
		}
		else
		{
			printf("Segundo operando B = %.2f\n", segundoNum);
		}


		printf("1.Ingresar 1er operando\n");
		printf("2.Ingresar 2do operando\n");
		printf("3.Calcular todas las operaciones\n");
		printf("4.Informar resultados\n");
		printf("5.Salir\n");
		printf("---------------------------------------------\n");
		printf("Seleccione 1 opcion: ");
		scanf("%i", &opcion);
		printf("\n");
		switch(opcion)
		{
			case 1:
            primerNum=ingresarEntero();
  			break;

			case 2:
	        segundoNum=ingresarEntero();
			break;

			case 3:

			resulSuma=Suma(primerNum,segundoNum);
			resulResta=Resta(primerNum, segundoNum);
			resulMul=Multiplicacion(primerNum, segundoNum);
			resulDiv=Division(primerNum, segundoNum);
			resulFactorialA=calcularFactorial(primerNum);
			resulFactorialB=calcularFactorial(segundoNum);

			break;

			case 4:
			printf("Segundo operando A = %.2f\n", primerNum);
			printf("Segundo operando B = %.2f\n\n\n", segundoNum);

			printf("resultado de la suma : %.2f\nResultado de la resta: %.2f\nResultado de la multiplicacion: %.2f\n", resulSuma, resulResta, resulMul);
			if (segundoNum==0){
				printf("Resultado de la division: ERROR. Imposible dividir por 0.");
			}
			else{
				printf("Resultado de la division= %.2f\n",resulDiv);
			}
			if(verificarDecimal(primerNum)==1 || primerNum<0){
				printf("Resultado factorial A= ERROR. Imposible factorizar numeros decimales y/o numeros negativos. Pruebe reingresando otro.\n");
			}
			if(verificarDecimal(segundoNum)==1 || segundoNum<0){
				printf("Resultado factorial B= ERROR. Imposible factorizar numeros decimales y/o numeros negativos. Pruebe reingresando otro.\n");
			}
			else {
				printf("Resultado del factorial A = %.2f\nResultado del factorial B = %.2f\n", resulFactorialA, resulFactorialB);
			}



			break;

			case 5:
			break;




		}
	}while(opcion!=0);


	return EXIT_SUCCESS;
}
