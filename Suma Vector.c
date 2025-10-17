#include <stdio.h>

int SumaVector(int vector[]);

int main() {
	int vector[5] = {7, 9, 4, 11, 10};
	int suma;
	suma = SumaVector(vector);
	printf("La suma de los elementos del vector es: %d\n", suma);
	return 0;
}

int SumaVector(int vector[]) {
	int suma = 0;
	for (int i = 0; i < 5; i++) {
		suma = suma + vector[i];
	}
	return suma;
}
