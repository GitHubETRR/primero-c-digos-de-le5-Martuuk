#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 20
#define INFERIOR 20
#define SUPERIOR 90
int CargaVector (int [],int);
int InvertirVector (int [],int);
int MostrarVector (int [],int);
int main() {
	int vector1[TAM];
	int vector2 [TAM];
	CargaVector();
	InvertirVector ();
	MostrarVector ();
	return 0;
}

int CargaVector (void) {

	//RANDOMIZA LOS VALORES DEL VECTOR
	srand(time(NULL));
	for (int i = 0; i < TAM; i++) {
		vector1[i] = INFERIOR + rand() % (SUPERIOR-INFERIOR+1);
	}
}
int InvertirVector (void) {
	for (int i = 0; i < TAM; i++) {
		vector2[TAM-1-i] = vector1[i];
	}
}
int MostrarVector (void) {
	for (int i = 0; i < TAM; i++) {
		printf ("%d_%d ",vector1[i],vector2[i] );
	}
}