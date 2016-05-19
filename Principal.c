#include <stdlib.h>
#include <stdio.h>
#include "Metodos.h"

int main(){
    int op1;//op2
    do{
        op1=Menu("\t\tMENU PRINCIPAL\n\n1) INSERTAR\n2) BORRAR\n3) LISTAR\n4) BUSCAR\n5) ACTUALIZAR\n6) SALIR\n\nSeleccione una opcion: ",6);
        switch(op1){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
        }
    }while(op1!=6);

    return 0;
}
