#include <iostream>
using namespace std;

// Funci�n para imprimir el arreglo a trav�s de un puntero
void impArreglo(int *p, const int tam) {
	cout << "Arreglo: ";
	for (int i = 0; i < tam; ++i) {
		cout << *(p + i) << " ";
	}
	cout << endl;
}

// Funci�n para modificar los valores del arreglo increment�ndolos en un valor dado
void modificarArreglo(int *p, const int tam, int incrementoBase, int incrementoAdicional) {
	for (int i = 0; i < tam; ++i) {
		*(p + i) += (incrementoBase + incrementoAdicional);
	}
}

int main(int argc, char *argv[]) {
	const int TAM = 5; // cantidad de elementos de arreglo
	int *pi = new int[TAM]; // Crear un arreglo din�mico usando punteros
	
	// Inicializar el arreglo din�mico
	for (int i = 0; i < TAM; ++i) {
		pi[i] = i + 1;
	}
	
	// Funci�n para imprimir el arreglo pasando el puntero
	impArreglo(pi, TAM);
	
	// Solicitar al usuario el valor de incremento
	int incrementoAdicional;
	cout << "Ingrese el valor de incremento: ";
	cin >> incrementoAdicional;
	
	// Funci�n para modificar los valores del arreglo increment�ndolos en 10 m�s el valor adicional ingresado
	modificarArreglo(pi, TAM, 0, incrementoAdicional);
	
	// Comentario: Se imprime el arreglo despu�s de modificar los valores increment�ndolos en 10 m�s el valor adicional ingresado
	impArreglo(pi, TAM);
	
	// Liberar la memoria asignada din�micamente
	delete[] pi;
	
	return 0;
}
