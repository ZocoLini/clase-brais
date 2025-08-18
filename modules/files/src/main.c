#include <stdio.h>
#include <func.h>

void mostrar_menu() {
    printf("\n=== MENÚ PRINCIPAL ===\n");
    printf("1. añadir a la lista \n");
    printf("2. mostrar lista\n");
    printf("3. vaciar lista\n");
    printf("4. Salir\n");
    printf("=====================\n");
    printf("Selecciona una opción: ");
}

int main() {
    int opcion;
    int continuar = 1;

    printf("¡Bienvenido al programa!\n");

    while (continuar) {
        mostrar_menu();

        if (scanf("%d", &opcion) != 1) {
            printf("\nError: Por favor ingresa un número válido.\n");
            // Limpiar el buffer de entrada
            while (getchar() != '\n');
            continue;
        }

        switch (opcion) {
            case 1:
                add();
                break;
            case 2:
                show();
                break;
            case 3:
                clear();
                break;
            case 4:
                printf("\n¡Gracias por usar el programa! ¡Hasta luego!\n");
                continuar = 0;
                break;
            default:
                printf("\nOpción no válida. Por favor selecciona una opción del 1 al 4.\n");
                break;
        }

        if (continuar) {
            printf("\nPresiona Enter para continuar...");
            getchar(); // Consumir el newline del scanf anterior
            getchar(); // Esperar a que el usuario presione Enter
        }
    }

    return 0;
}                            