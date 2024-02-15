#include <iostream>
using namespace std;

// Función para imprimir el arreglo a través de un puntero
void impArreglo(int *p, const int tam) {
	cout << "Arreglo: ";
	for (int i = 0; i < tam; ++i) {
		cout << *(p + i) << " ";
	}
	cout << endl;
}

// Función para modificar los valores del arreglo incrementándolos en un valor dado
void modificarArreglo(int *p, const int tam, int incrementoBase, int incrementoAdicional) {
	for (int i = 0; i < tam; ++i) {
		*(p + i) += (incrementoBase + incrementoAdicional);
	}
}

int main(int argc, char *argv[]) {
	const int TAM = 5; // cantidad de elementos de arreglo
	int *pi = new int[TAM]; // Crear un arreglo dinámico usando punteros
	
	// Inicializar el arreglo dinámico
	for (int i = 0; i < TAM; ++i) {
		pi[i] = i + 1;
	}
	
	// Función para imprimir el arreglo pasando el puntero
	impArreglo(pi, TAM);
	
	// Solicitar al usuario el valor de incremento
	int incrementoAdicional;
	cout << "Ingrese el valor de incremento: ";
	cin >> incrementoAdicional;
	
	// Función para modificar los valores del arreglo incrementándolos en 10 más el valor adicional ingresado
	modificarArreglo(pi, TAM, 0, incrementoAdicional);
	
	// Comentario: Se imprime el arreglo después de modificar los valores incrementándolos en 10 más el valor adicional ingresado
	impArreglo(pi, TAM);
	
	// Liberar la memoria asignada dinámicamente
	delete[] pi;
	
	return 0;
}
