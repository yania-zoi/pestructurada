#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre [4][20];
    int i, j;

    for(i=0; i<4; i++){
        printf("ingrese su nombre %d: ", i+1);
        fgets(nombre[i],20,stdin);
    }

    i=0;

    for(i=0; i<4; i++){
        printf("%d ", &nombre[i]);
    }
    i= 0;
    for(i=0; i<4; i++){
        printf("%s ", nombre[i]);
    }
    i=0;
    char arreglo [5];
    for(i=0; i<5; i++){
        printf("\n%d \n", &arreglo[i]);
    }

    int numeros [5];
    for(i=0; i<5; i++){
        printf("\n%d ", &numeros[i]);
    }

    return 0;
}
