#include <iostream>

using namespace std;

int main() {
  /* Determinar  si  un  n�mero  es  positivo,  negativo  o  neutro.  El  usuario  ingresa  un 
 n�mero entero y el sistema verifica seg�n lo planteado */

  int num;
  cout << "Ingrese un numero : ";
  cin >> num;

  if (num > 0) {
    cout << "Positivo";
  } else if (num < 0) {
    cout << "Negativo";
  } else {
    cout << "Neutro";
  }

  return 0;
}
