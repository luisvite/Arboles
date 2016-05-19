#include <stdlib.h>
#include <stdio.h>
#include "Metodos.h"

int Menu (char texto[], int n){
    int opcion;
    do{
        printf("%s ",texto);
        scanf("%d", &opcion);
        if (opcion < 1 || opcion > n){
            system("cls");
            printf("Error: opcion no valida...\n\n");
        }
    }while (opcion<1 || opcion>n);
    return opcion;
}
