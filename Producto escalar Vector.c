#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 3
#define INFERIOR 0
#define SUPERIOR 4
int CalculoEscalar (void);
int main() {
	CalculoEscalar();
	return 0;
}

int CalculoEscalar (void) {
	int ProductoEscalar=0;
	int vector1[TAM];
	int vector2 [TAM];

	//RANDOMIZA LOS VALORES DEL VECTOR
	srand(time(NULL));
	for (int i = 0; i < TAM; i++) {
		vector1[i] = INFERIOR + rand() % (SUPERIOR-INFERIOR+1);
		vector2[i] = INFERIOR + rand() % (SUPERIOR-INFERIOR+1);
	}

	//calcula producto escalar
	for (int i = 0; i < TAM; i++) {
		ProductoEscalar = ProductoEscalar + vector1[i]*vector2[i];
	}

	printf ("%d   ", ProductoEscalar);
	//escribe cada par de los valores de cada vector
	for (int i = 0; i < TAM; i++) {
		printf ("%d_%d ",vector1[i],vector2[i] );
	}
}