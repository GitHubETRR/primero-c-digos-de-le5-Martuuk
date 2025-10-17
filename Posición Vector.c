#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 100
#define INFERIOR 10
#define SUPERIOR 40
int repeticion_vector (void);
int main(){
    repeticion_vector();
    return 0;
}

int repeticion_vector (void){
    int mayor=0, repeticion=0, menor=40;
    int vector[TAM];
    srand(time(NULL));
    //RANDOMIZA LOS VALORES DEL VECTOR
    for (int i = 0; i < TAM; i++) {
        vector[i] = INFERIOR + rand() % (SUPERIOR-INFERIOR+1);
    }
    //Busca el mayor valor
    for (int i = 0; i < TAM; i++){
        if (vector[i]>mayor) {
            mayor=vector[i];
        }
    }
    //Busca el menor valor
     for (int i = 0; i < TAM; i++){
        if (vector[i]<menor) {
            menor=vector[i];
        }
    }
    printf ("el mayor es %d y el menor es %d \n", mayor, menor);
    //ubica y escribe todas las posiciones del mayor
    for (int i = 0; i < TAM; i++){
        if (vector[i]==mayor) 
        printf ("el mayor se encuentra en la posicion %d \n",i );
    }
}