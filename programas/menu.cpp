#include <iostream>

using namespace std;

///variable, condicion, contador

int main () {

/* for (int i = 0; i <= 5; i++){
    cout << "algo: " << i << endl;

}*/

/* int contador = 1;

   while(contador < 5){
    cout << "algo" << endl;
    contador++;
   }*/

/*
   int opcion;

   do {
    cout << "menu de opciones\n";
    cout << "1. holi\n";
    cout << "2. chau\n";
    cout << "3. salir\n";
    cin >> opcion;

   } while(opcion !=3);

*/

int opcion;

     do {
    cout << "menu de opciones\n";
    cout << "1. holi\n";
    cout << "2. chau\n";
    cout << "3. salir\n";
    cin >> opcion;

    switch(opcion){
   case 1: cout << "estoy diciendo holi. " << endl;
   break;

   case 2: cout << "estoy diciendo chau. " << endl;
    break;

    case 3: cout << "opcion no valida. " << endl;
    break;

    }

   } while(opcion !=3);

return 0;

}
