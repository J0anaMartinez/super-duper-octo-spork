#include <iostream>
using namespace std;


int main (){

int numero;

for(int i = 1; i<= 10; i++){

    cout << numero << "x" << i << "=" << numero * i << endl;
    cout << "ingrese un numero: ";
    cin >> numero;

     if(numero <= 0){
    cout << "ingrese un numero mayor a cero" << endl;
  }

}


return 0;

}
