#include <iostream>

using namespace std;

int main() {
  /*Dado tres n�meros enteros, devolver el n�mero mayor.*/
  int n1, n2, n3;

  cout << "Ingrese el primer numero : ";
  cin >> n1;

  cout << "Ingrese el segundo numero : ";
  cin >> n2;

  cout << "Ingrese el tercer numero : ";
  cin >> n3;

  if (n1 >= n2 && n1 >= n3) {
    cout << n1 << " es el mayor.";
  } else {
    if (n2 > n3)
      cout << n2 << " es el mayor.";
    else
      cout << n3 << " es el mayor.";
  }
  
  return 0;
}
