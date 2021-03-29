/*
 * matematicas.h
 *
 *  Created on: 17 mar. 2021
 *      Author: egabr
 */

#ifndef MATEMATICAS_H_
#define MATEMATICAS_H_

int utn_sumNumbers(float numberOne,float numberTwo, float* sumResult);
int utn_subtractionNumbers(float numberOne,float numberTwo, float* subtractionResult);
int utn_divisionNumbers(float numberOne,float numberTwo, float* divisionResult);
int utn_multiplicationNumbers(float numberOne,float numberTwo, float* multiplicationResult);
int utn_factorialNumber(float number, long long int* factorial);
int utn_isInt(float number);
int utn_getFloatWithoutMinimumOrMaximum(float* pNumeroSolicitado,char* pTexto,char* pTextoError,int reintentos);

#endif /* MATEMATICAS_H_ */
