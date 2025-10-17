#include <stdio.h>

int SumaVector(int vector[]);
float PromedioVector(int vector[]);

int main() {
    int vector[5] = {7, 9, 4, 11, 10};
    int suma;
    float promedio;

    suma = SumaVector(vector);
    printf("La suma de los elementos del vector es: %d\n", suma);

    promedio = PromedioVector(vector);
    printf("El promedio de los elementos del vector es: %f\n", promedio);

    return 0;
}

int SumaVector(int vector[]) {
    int suma = 0;
    for (int i = 0; i < 5; i++) {
        suma = suma + vector[i];
    }
    return suma;
}

float PromedioVector(int vector[]) {
    int suma = 0;
    float prom = 0;
    for (int i = 0; i < 5; i++) {
        suma = suma + vector[i];
        prom = suma/5;
    }
    return prom;  
}

