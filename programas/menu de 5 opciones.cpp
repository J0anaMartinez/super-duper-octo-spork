/// crea un menu que contenga 5 opciones, en ese menu van a estar los nombres de los siguienes programas;
///sumar dos numeros, verificar si un numero es par o impar, convertir gradios a celcius,
///mostrar la tabla de multiplicar de un numero, opcion 5 salir. el usuario debe poeder ingresar a cada una de
///las opcones del mundo ejecutando el programa antes mencionado


/// mostrar la tabla de multiplicar del 5

///


///

#include <iostream>

using namespace std;

int main(){
int opcion;
double PrimerNumero, SegundoNumero;
double Suma, ImparOPar, fahrenheit, celcius, multiplicacionDeUnnumero;

do {

    cout << "Menu de opciones: \n";
    cout << " 1. Sumar dos numeros\n ";
    cout << "2. verificar si un numero es par o impar\n ";
    cout << "3. Convertir celcius a fahrenheit\n ";
    cout << "4. Mostrar la tabla de multiplicar de un numero\n ";
    cout << "5. Salir\n ";
    cin >> opcion;

    switch (opcion){
    case 1: cout << "Ingrese dos numeros ";
    cin >> PrimerNumero;
    cin >> SegundoNumero;
    Suma = PrimerNumero + SegundoNumero;
    cout << "El resultado de la suma de los dos numeros es: " << Suma << endl;

    break;


    case 2: cout << "ingresar un numero: ";
    cin >> PrimerNumero;
    ImparOPar = PrimerNumero/2;
    if (ImparOPar == 0)
        cout << "el numero es par" << endl;

    else
        cout << "el numero es impar" << endl;

     break;

     case 3: cout << "ingrese los celcius: ";
     cin >> celcius;
     fahrenheit = (celcius * 1.8) + 32;
     cout << "la temperatura en celcius es: " << fahrenheit << endl;

     case 4: cout << "ingrese un numero: ";
     cin >> PrimerNumero;
    for (int i = 1; i <= 10; i++){
        multiplicacionDeUnnumero = PrimerNumero*i;
        cout << "la tabla de multiplicacion del numero ingresado es: " << multiplicacionDeUnnumero << endl;

    }

    }

} while (opcion !=5);
cout << "adioh";

return 0;

}
