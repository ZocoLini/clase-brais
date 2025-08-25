#include <stdio.h>
void add()
{
    char item[99];
    scanf("%s", item);
    FILE* lista_compra = fopen("lista.txt", "a");
    fprintf(lista_compra, "%s\n", item);
    fclose(lista_compra);
}

void show()
{
    char item[99];
    FILE* lista_compra = fopen("lista.txt", "r");

    while (fscanf(lista_compra, "%s", item) != EOF)
    {
        printf("%s\n", item);
    }

    fclose(lista_compra);
}

void clear()
{
    FILE* lista_compra = fopen("lista.txt", "w");
    fclose(lista_compra);
}
