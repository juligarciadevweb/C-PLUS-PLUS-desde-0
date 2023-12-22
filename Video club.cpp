#include <iostream>

using namespace std;

/*

En un video club se administra los datos de los N socios: 
Edad, Deporte que realiza (1=Futbol,
2= Natación, 3 = jockey) y Sexo (1 = Masculinos, 2 = Femeninos).

Se desea saber:
a) Cuantos socios entre la edad de 30 y 50 años practican futbol.
b) Cuantos socios femeninos tiene el club y cuantos masculinos.
c) Cuantos socios son menores de 16 años.

*/

int main()
{
	int contA = 0; // Contador del item A
	int contM = 0; // Contador del masculinos
	int contF = 0; // Contador de femeninos
	int contC = 0; // Contador del item C
	int sex;
	int edad;
	int dep;
	int n; 
	cout << "Ingrese la cantidad de socios a trabajar: ";
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cout << "\nIngrese la edad: ";
		cin >> edad;
		cout << "\nIngrese el sexo (1 para masculino y 2 para femenino): ";
		cin >> sex;
		cout << "\nIngrese el deporte (1=Futbol, 2= Natacion, 3 = jockey): ";
		cin >> dep;
		
		if(edad > 30 && edad < 50 && dep == 1) contA++; 		
		if(sex == 1) contM++; else contF++;
		if(edad < 16) contC++;
	}
	
	cout << "\nSocios entre la edad de 30 y 50 años practican futbol son "<<contA;
	cout << "\nSocios femeninos: "<<contF;
	cout << "\nSocios masculinos: "<<contM;
	cout << "\nLa cantidad de socios menores de edad es "<<contC;
}