#include <stdio.h>
int doguai(){
int opcion;
do {
    printf("1. continuar\n");
    printf("2. salir\n");
    scanf("%d", &opcion);

} while (opcion !=2);
return 0;
}

