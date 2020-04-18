#include <iostream>

using namespace std;

int main() {

  double base, total, descuento, igv;
  
  const double TASA_IGV = 0.19; 
  
  string ISO = " PEN";
  
  cout << "Ingrese el monto base (PEN): ";
  cin >> base;

  if (base > 100) {
    descuento = base * 0.2;
  } else {
    descuento = base * 0.1;
  }
  
  igv = (base - descuento) * TASA_IGV;
  total = (base - descuento) + igv;
  
  cout << "El monto de descuento es "<< descuento << ISO
       << ", el impuesto es " << igv << ISO
	   << " y el importe a pagar es " << total << ISO;
	
  return 0;
}
