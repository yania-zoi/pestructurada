#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre [3][20];
    printf("ingrese su nombre: ");
    fgets(nombre[0],20,stdin);
    printf("ingrese su segundo nombre: ");
    fgets(nombre[1],20,stdin);
    printf("ingrese su primer apellido: ");
    fgets(nombre[2],20,stdin);
    printf("ingrese su segundo apellido: ");
    fgets(nombre[3],20,stdin);

    return 0;
}
