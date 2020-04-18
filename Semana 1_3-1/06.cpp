#include <iostream>

using namespace std;

int main() {

  int temperatura;
  string clima;
  
  cout << "Ingrese la temperatura : ";
  cin >> temperatura;

  if (temperatura > 30) 
    clima = "Tropical";
  else if (temperatura >= 21) 
    clima = "Calor";
   else if (temperatura >= 10) 
    clima = "Nublado";
  else 
    clima = "Frio";
  
  cout << "Temperatura "<< temperatura << " - Tipo de Clima " << clima;

	
  return 0;
}
