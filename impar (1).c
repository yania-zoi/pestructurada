#include <stdio.h>

int impar()
{
    int num, n;
    printf("ingrese un numero: ");
    scanf("%d", &num);
    n = num%2;
    if(n==1){
        printf("su numero es impar.\n");
    }
    return 0;
}



