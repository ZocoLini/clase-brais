#include <stdio.h>
#include <stdlib.h>
int main()
{
    // 1 game donde el usuario tien que adivinar un numero y sino blucle forever

    int numero_salida = 6;
    int numero = 5;
    // scanf("%d", &numero);
    
    if ( numero == numero_salida)
    { 
        printf("ERES UN GENIO BRAVO");
        return 0;
       
    }
    system("clear");
    return main();
}
