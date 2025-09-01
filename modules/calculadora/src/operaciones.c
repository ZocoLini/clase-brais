#include "input.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void sumar()
{
    float num2 = read_float();
    float num1 = read_float();
    printf("%f + %f = %f\n", num1, num2, num1 + num2);
}

void restar()
{
    float num2 = read_float();
    float num1 = read_float();
    printf("%f - %f = %f\n", num1, num2, num1 - num2);
}

void multiplicar()
{
    float num2 = read_float();
    float num1 = read_float();
    printf("%f * %f = %f\n", num1, num2, num1 * num2);
}

void dividir()
{
    float num2 = read_float();
    float num1 = read_float();
    printf("%f / %f = %f\n", num1, num2, num1 / num2);
}

void eq_2_grade()
{
    printf("Introduce a, b y c en orden:\n");
    float a = read_float();
    float b = read_float();
    float c = read_float();

    float discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
    {
        printf("No hay soluciones reales\n");
        return;
    }

    float x1 = (-b + sqrt(discriminant)) / (2 * a);
    float x2 = (-b - sqrt(discriminant)) / (2 * a);

    printf("Las soluciones son x1 = %f y x2 = %f\n", x1, x2);
}

void ruffini()
{
    printf("Introduce los cocientes del polinomio ordenado de forma descendente: ");
    int size;
    float* cocientes = read_float_array(&size);

    for (int i = 1; i <= abs((int)cocientes[size - 1]); i++)
    {
        float anterior = cocientes[0];
        for (int j = 1; j < size; j = j + 1)
        {
            anterior = anterior * i + cocientes[j];
        }
        if (anterior == 0)
        {
            printf("%d es uan raiz del polinomio \n", i);
        }

        anterior = cocientes[0];
        for (int j = 1; j < size; j = j + 1)
        {
            anterior = anterior * -i + cocientes[j];
        }
        if (anterior == 0)
        {
            printf("%d es uan raiz del polinomio \n", -i);
        }
    }

    // for (int i = 0; i < size; i = i + 1)
    // {
    //     printf("%f",cocientes[i]);
    // }
}
