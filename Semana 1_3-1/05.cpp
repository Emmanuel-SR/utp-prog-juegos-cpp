#include <iostream>

using namespace std;

int main() {

  double consumo, total, descuento, igv;
  
  const double TASA_IGV = 0.18; 
  
  string ISO = " PEN";
  
  cout << "Ingrese el monto de consumo (PEN): ";
  cin >> consumo;

  if (consumo > 200) 
    descuento = consumo * 0.3;
  else if (consumo > 100) 
    descuento = consumo * 0.2;
  else 
    descuento = consumo * 0.1;
  
  igv = (consumo - descuento) * TASA_IGV;
  total = (consumo - descuento) + igv;
  
  cout << "El monto de descuento es "<< descuento << ISO
       << ", el impuesto es " << igv << ISO
	   << " y el importe a pagar es " << total << ISO;
	
  return 0;
}
