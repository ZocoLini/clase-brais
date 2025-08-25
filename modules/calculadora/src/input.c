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

float* read_float_array(int* size)
{
    const int MAX_SIZE = 100;
    float* array = malloc(MAX_SIZE * sizeof(float));

    int i = 0;

    while (scanf("%f", &array[i]))
    {
        ++i;
        if (i == MAX_SIZE)
        {
            printf("El arreglo esta lleno.\n");
            break;
        }
    }

    *size = i;

    float* final_array = malloc(i * sizeof(float));
    for (int j = 0; j < i; ++j)
    {
        final_array[j] = array[j];
    }
    free(array);

    return final_array;
}
