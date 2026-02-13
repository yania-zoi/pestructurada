#include <stdio.h>

int sistemavalidacion(){
    int p, r, e;
    printf("ingrese su edad: \n");
    scanf("%d", &e);
    printf("ingrese su promedio sobre 100: \n");
    scanf("%d", &p);
    printf("ingrese su cantidad de materias reprobadas: \n");
    scanf("%d", &r);
    if(e>=18){
        printf("Eres mayor de edad.\n");
    }
    else{
        printf("eres menor de edad q perdedor :p\n");
    }
    if(p>=90){
            if(r==0){
                printf("eres apto para obtener la beca.\n");
            }
            else{
                printf("no eres apto para obtener la beca.\n");
            }
    }
    if(0<r<=2){
        printf("puedes reinscribirte bravo\n");
    }
    else if (r>=3){
        printf("estas en problemas camarada.\n");
    }
    return 0;
}
