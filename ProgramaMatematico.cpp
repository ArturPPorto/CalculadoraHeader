#include <iostream>
#include <iomanip>
#include <math.h>
#include <tchar.h>
#include "Matematica.h"

using namespace std;

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int num1, num2;
	char Op;
	cout << "-----CALCULADORA-----";
	cout << "\nInsira o 1 n�mero: ";
	cin >> num1;
	cout << "\nInsira o 2 n�mero: ";
	cin >> num2;
	cout << "\n-----TODAS AS OPERA��ES DISPON�VEIS-----" << "\n";
	cout << "\n-Adi��o (+)";
	cout << "\n-Subtra��o (-)";
	cout << "\n-Multiplica��o (*)";
	cout << "\n-Divis�o (/)";
	cout << "\n-Pot�ncia (^)";
	cout << "\n-Raiz quadrada do 1 valor (1)";
	cout << "\n-Raiz quadrada do 2 valor (2)";
	cout << "\n\nQual opera��o deseja realizar: ";
	cin >> Op;
	switch (Op)
	{
	case '+': cout << "\nValor da soma entre " << num1 << " + " << num2 << " = " << Soma(num1, num2) << "\n";
		break;
	case '-': cout << "\nValor da subtra��o entre " << num1 << " - " << num2 << " = " << Subtracao(num1, num2) << "\n";
		break;
	case '*': cout << "\nValor da multiplica��o entre " << num1 << " * " << num2 << " = " << Potencia(num1, num2) << "\n";
		break;
	case '/': cout << "\nValor da divis�o entre " << num1 << " / " << num2 << " = " << Divisao(num1, num2) << "\n";
		break;
	case '^': cout << "\nValor de " << num1 << " ^ " << num2 << " = " << Potencia(num1, num2) << "\n";
		break;
	case '1': cout << "\nValor da raiz de " << num1 << " = " << Raiz(num1) << "\n";
		break;
	case '2': cout << "\nValor da raiz de " << num2 << " = " << Raiz(num2) << "\n";
		break;
	default: cout << "\nOPERA��O INV�LIDA, TENTE NOVAMENTE......" << "\n";
		break;
	}

	system("PAUSE");
	return 0;
}