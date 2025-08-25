#include "operaciones.h"
#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean int

void show_menu();

int main(void) {
  boolean exit = false;

  while (!exit) {
    show_menu();
    int option;
    scanf("%d", &option);

    switch (option) {
    case 0:
      exit = true;
      continue;
      break;
    case 1:
      sumar();
      break;
    case 2:
      restar();
      break;
    case 3:
      multiplicar();
      break;
    case 4:
      dividir();
      break;
      case 5:
      eq_2_grade();
      break;
    case 6:
      ruffini();
      break;
    default:
      printf("Opcion invalida\n");
      break;
    }

    getchar();
    printf("Presiona Enter para continuar...");
    getchar();

    system("clear");
  }
}

void show_menu() {
  printf("### CALCULADORA CIENTICIERA ###\n");
  printf("\t0 - Salir\n");
  printf("\t1 - Sumar\n");
  printf("\t2 - Restar\n");
  printf("\t3 - Multiplicar\n");
  printf("\t4 - Dividir\n");
  printf("\t5 - Ecuacion de segundo grado\n");
  printf("\t6 - Ruffini\n");
}
