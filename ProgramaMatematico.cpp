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
	cout << "\nInsira o 1 número: ";
	cin >> num1;
	cout << "\nInsira o 2 número: ";
	cin >> num2;
	cout << "\n-----TODAS AS OPERAÇÕES DISPONÍVEIS-----" << "\n";
	cout << "\n-Adição (+)";
	cout << "\n-Subtração (-)";
	cout << "\n-Multiplicação (*)";
	cout << "\n-Divisão (/)";
	cout << "\n-Potência (^)";
	cout << "\n-Raiz quadrada do 1 valor (1)";
	cout << "\n-Raiz quadrada do 2 valor (2)";
	cout << "\n\nQual operação deseja realizar: ";
	cin >> Op;
	switch (Op)
	{
	case '+': cout << "\nValor da soma entre " << num1 << " + " << num2 << " = " << Soma(num1, num2) << "\n";
		break;
	case '-': cout << "\nValor da subtração entre " << num1 << " - " << num2 << " = " << Subtracao(num1, num2) << "\n";
		break;
	case '*': cout << "\nValor da multiplicação entre " << num1 << " * " << num2 << " = " << Potencia(num1, num2) << "\n";
		break;
	case '/': cout << "\nValor da divisão entre " << num1 << " / " << num2 << " = " << Divisao(num1, num2) << "\n";
		break;
	case '^': cout << "\nValor de " << num1 << " ^ " << num2 << " = " << Potencia(num1, num2) << "\n";
		break;
	case '1': cout << "\nValor da raiz de " << num1 << " = " << Raiz(num1) << "\n";
		break;
	case '2': cout << "\nValor da raiz de " << num2 << " = " << Raiz(num2) << "\n";
		break;
	default: cout << "\nOPERAÇÃO INVÁLIDA, TENTE NOVAMENTE......" << "\n";
		break;
	}

	system("PAUSE");
	return 0;
}