/*
 * biblioteca.c
 *
 *  Created on: 1 sep. 2021
 *      Author: Ghasty
 */
#include "biblioteca.h"


float ingresarEntero(void){
	float numero;
	printf("Ingrese numero: ");
	scanf("%f", &numero);
	if(numero-(int)numero==0){
	numero=(int)numero;
	return numero;
	}
	else
	{
		return numero;
	}
}


float Suma(float a, float b){
      float resultado;
      resultado=a+b;
      return resultado;
}




float Resta(float a, float b){
    float resultado;
    resultado=a-b;
    return resultado;
}




float Division(float a, float b)
{

	float resultado;

	if(b==0){
		printf("Imposible dividir por 0.");
        b=ingresarEntero();

	}
	else{
		resultado=a/b;
	}
	return resultado;
}




float Multiplicacion(float a, float b){
    float resultado;
    resultado=a*b;
    return resultado;
}




long double calcularFactorial(float a){

	   long double resul = 1;
	   int con;
        for(con = 1; con<=a;con++){
		   resul*=con;
	       }
	  return resul;
	  }





int verificarDecimal(float a){
	int flag;
	if (a - (int)a == 0){
		flag = 0;
	}
	else {
		flag = 1;
	}
	return flag;

}





