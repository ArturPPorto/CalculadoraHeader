#include <iostream>
#include <iomanip>
#include <math.h>
#include <tchar.h>
#include "Matematica.h"

int Soma(int num1, int num2)
{
	return num1 + num2;
}
int Subtracao(int num1, int num2)
{
	return num1 - num2;
}
int Multiplicacao(int num1, int num2)
{
	return num1 * num2;
}
float Divisao(int num1, int num2)
{
	return (float)num1 / (float)num2;
}
int Potencia(int num1, int num2)
{
	return pow(num1, num2);
}
float Raiz(int num)
{
	return sqrt(num);
}
