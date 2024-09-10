#include <iostream>

using namespace std;

int main (){

  double PesoUsuario, AlturaUsuario, ImcCalculado;

  cout << "ingrese su altura: ";
  cin >> AlturaUsuario;

  cout << "ngrese su peso: ";
  cin >> PesoUsuario;

  ImcCalculado = PesoUsuario/(AlturaUsuario*AlturaUsuario);

  if (ImcCalculado < 18.5) {
    cout << "Su imc es bajo: " << ImcCalculado << endl;
  }

    else if (ImcCalculado < 25) {

    cout << "su IMC es normal: " << ImcCalculado << endl;
    }

    else if (ImcCalculado < 30) {
    cout << "Su IMC es sobre peso: " << ImcCalculado << endl;


  }

    else
        cout << "Su IMC es muy gordito;" << ImcCalculado << endl;





return 0;

}
