#include <stdio.h>
#include <stdlib.h>
float read_float()
{
    float num;
    printf("Ingresa un numero decimal: ");
    scanf("%f", &num);
    return num;
}

int read_int()
{
    int num;
    printf("Ingresa un numero entero: ");
    scanf("%d", &num);
    return num;
}

long read_long()
{
    long num;
    printf("Ingresa un numero entero: ");
    scanf("%ld", &num);
    return num;
}


float* read_float_array(int* size) {
    int capacidad = 10; // tamaño inicial
    float* arreglo = malloc(capacidad * sizeof(float));

    int i = 0;
    printf("Ingrese números decimales (fin con una letra o CTRL+D/CTRL+Z):\n");

    while (1) {
        float valor;
        int r = scanf("%f", &valor);

        if (r != 1) // fin de la entrada
            break;

        if (i == capacidad) {
            capacidad *= 2;
            float* tmp = realloc(arreglo, capacidad * sizeof(float));
            arreglo = tmp;
        }

        arreglo[i++] = valor;
    }

    *size = i;
    return arreglo;
}