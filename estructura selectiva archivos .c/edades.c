#include <stdio.h>
int edades()
{
    int ed;
    printf("ingrese su edad: ");
    scanf("%d", &ed);
    if (ed>=17){
        printf("eres mayor de edad bravo\n");
    }
    else {
        printf("eres menor de edad lol\n");
    }
    return 0;
}
