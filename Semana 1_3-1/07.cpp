/*
    x^2 + 2x + 1  discriminante = 0, 2 soluciones
    
    x^2 - 2x - 1  discriminante = 8, existen dos raíces y son simples.
    
    x^2 + x + 1  discriminante = -3, no tiene soluciones reales
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {

  double a, b, c, discriminante, x1 ,x2;
  
  bool ok = true;
  
  cout << 2 / 2 * 3;
  
  cout << "Ingrese el valor para 'a' : ";
  cin >> a;
  
  cout << "Ingrese el valor para 'b' : ";
  cin >> b;
  
  cout << "Ingrese el valor para 'c' : ";
  cin >> c;
  
  discriminante = pow(b,2) - (4 * a * c);
  
  if (a == 0) {
    cout << "'a' debe ser diferente de cero.\n";
    ok = false;
  }
  
  if (discriminante < 0) {
    cout << "La ecuacion no tiene soluciones reales\n";
    ok = false;
  }
  
  if(ok){
  	x1 = (-b + sqrt(discriminante)) / (2 * a);
  	
	x2 = (-b - sqrt(discriminante)) / (2 * a);
	
	cout << "x1=" << x1 << " y x2=" << x2;
  }

  return 0;
}
