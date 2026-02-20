#include <stdio.h>
int promedio()
{
    int p, r;
    printf("ingrese su promedio sobre 100: ");
    scanf("%d", &p);
    if(p>=85){
        printf("tienes un promedio valido para aplicar\ningresa la cantidad de materias reprobadas: ");
        scanf("%d", &r);
        if(r=0){
            printf("eres apto para obtener la beca");
        }
        else{
            printf("no eres apto para la beca");
        }
    }
    else{
            printf("no tienes el promedio suficiente.");
        }


    return 0;
}

