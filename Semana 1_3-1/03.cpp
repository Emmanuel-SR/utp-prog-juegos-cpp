// Dado tres números, devolver los tres números en forma ascendente.
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

	int n1, n2, n3;

	cout << "Ingrese el primer numero : ";
	cin >> n1;

	cout << "Ingrese el segundo numero : ";
	cin >> n2;

	cout << "Ingrese el tercer numero : ";
	cin >> n3;

	if (n1 > n2)
		if (n2 > n3)
		    printf("Los numeros ordenados son: %d, %d, %d", n3, n2, n1);
		else
			if (n1 > n3)
				printf("Los numeros ordenados son: %d, %d, %d", n2, n3, n1);
			else
				printf("Los numeros ordenados son: %d, %d, %d", n2, n1, n3);
	else
		if (n1 > n3)
			printf("Los numeros ordenados son: %d, %d, %d", n3, n1, n2);
		else
			if (n2 > n3)
				printf("Los numeros ordenados son: %d, %d, %d", n1, n3, n2);
			else
				printf("Los numeros ordenados son: %d, %d, %d", n1, n2, n3);
					
	return 0;
}
