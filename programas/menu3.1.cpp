
#include <iostream>

using namespace std;

void ingreseNumero(int numeroIngresado){

        cout << "ingrese un numero de mas de dos digitos: ";
        cin >> numeroIngresado;

}

void sumarDigitos(int numero){

 int suma = 0;

 while (numero > 0 ){
    suma += numero % 10;
    numero /= 10;

 }

}

void calcularFactorial(){


}



int main(){
int opcion;

do {

    cout << "Menu de opciones: \n";
    cout << " 1. Sumar digitos\n ";
    cout << "2. verificar si un numero es par o impar\n ";
    cout << "3. Convertir celcius a fahrenheit\n ";
    cout << "4. salir\n ";
    cin >> opcion;

switch (opcion){
    case 1:
    ingreseNumero(numeroIngresado);
    sumarDigitos(numero);
    return 0;

    case 2:
        cout << "ingrese un numero de mas de dos digitos: ";
        cin >> numero;

    case 3:
        cout << "ingrese un numero de mas de dos digitos: ";
        cin >> numero;






}


}
