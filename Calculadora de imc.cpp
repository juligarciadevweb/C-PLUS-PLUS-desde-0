#include <iostream>
#include <math.h>
/*
	Realizar una calculadora de IMC
*/

using namespace std;

int main()
{
	int peso = 0;
	cout << "Ingrese el peso: ";
	cin >> peso;
	cout << "Ingrese la altura exacta: ";
	float altura = 0;
	cin >> altura;	
	float imc = peso / pow(altura, 2);	
	
	if(imc > 18.5 && imc < 24.9)
	{
		cout << "El imc es normal y es: " <<imc;
	} else if(imc > 25.0 && imc <= 29.9){
		cout << "El imc se encuentra dentro del rango de sobrepeso y es: "<<imc;
	}else{
		cout << "Se encuentra dentro del rango de obesidad y su imc es: "<<imc;
	}
}
