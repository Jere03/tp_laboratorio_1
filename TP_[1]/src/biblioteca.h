/*
 * biblioteca.h
 *
 *  Created on: 1 sep. 2021
 *      Author: Ghasty
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_
#include <stdio.h>
int verificarDecimal(float);
///@brief Verifica si es decimal.
///@param Numero para validar
/// @param Recibe un numero entero
/// @return Devuelve un true/false acorde a la validacion
float ingresarEntero(void);
///@brief Pide el ingreso de un numero
///@param Un mensaje impreso en pantalla donde pide el numero
/// @return Devuelve un numero flotante
float Suma(float, float);
///@brief Calculo de la suma
///@param Recibe el primer numero
/// @param Recibe el segundo numero
/// @return Devuelve el resultado de la operacion
float Resta(float, float);
///@brief Calculo de la resta
///@param Recibe el primer numero
/// @param Recibe el segundo numero
/// @return Devuelve el resultado de la operacion
float Division(float, float);
///@brief Calculo de la division
///@param Recibe el primer numero
/// @param Recibe el segundo numero
/// @return Devuelve el resultado de la operacion
float Multiplicacion(float, float);
///@brief Calculo de la multiplicacion
///@param Recibe el primer numero
/// @param Recibe el segundo numero
/// @return Devuelve el resultado de la operacion
long double calcularFactorial(float);
///@brief Calcula del factorial
///@param Numero a calcular
/// @return Devuelve el resultado


#endif /* BIBLIOTECA_H_ */
