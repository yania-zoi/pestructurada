#include <stdio.h>

int par()
{
    int num, n;
    printf("ingrese un numero: ");
    scanf("%d", &num);
    n = num%2;
    if(n>0){
        printf("su numero es impar.\n");
    }
    else{
        printf("su numero es par\n");
    }
    return 0;
}


