#include <stdio.h>
int guail()
{
    int x;
    int suma = 0;
    printf("ingresa un numero: ");
    scanf ("%d", &x);
    while(x!=0){
        suma +=x;
        scanf("%d", &x);
    }
    return 0;
}
