/* Trabajo Pr�ctico 2 "N�mero Par"
* Lucas V�zquez
* 24/04/2015
*/

#include <iostream>

using namespace std;

int main(){
		int A;
		cout<<"Ingrese un numero entero \n";
		cin>>A;
		if (A==0)
			cout<<"El numero ingresado es Cero";
		else{
			if (A%2==0)
				cout<<"El numero ingresado es Par";
			else
				cout<<"El numero ingresado es Impar";
	}
}
