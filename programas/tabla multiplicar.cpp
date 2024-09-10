#include <iostream>
using namespace std;


int main (){

int numero = 5;

for(int i = 1; i<= 10; i++){

    cout << numero << "x" << i << "=" << numero * i << endl;
    cout << "ingrese un numero: ";
    cin >> numero;

}


return 0;

}
