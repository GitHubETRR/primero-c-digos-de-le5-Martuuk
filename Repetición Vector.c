#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 50
#define INFERIOR 10
#define SUPERIOR 20
int repeticion_vector (void);
int main() {
	repeticion_vector();
	return 0;
}

int repeticion_vector (void) {
	int mayor=0, repeticion=0;
	int vector[TAM];
	srand(time(NULL));
	for (int i = 0; i < TAM; i++) {
		vector[i] = INFERIOR + rand() % (SUPERIOR-INFERIOR+1);
	}
	for (int i = 0; i < TAM; i++) {
		if (vector[i]>mayor) {
			mayor=vector[i];
		}
	}
	for (int i = 0; i < TAM; i++) {
		if (vector[i]==mayor)
			repeticion++;
	}
	for (int i = 0; i < TAM; i++) {
		printf ("%d ",(vector[i]));
	}
	printf ("\n %d",repeticion);

}