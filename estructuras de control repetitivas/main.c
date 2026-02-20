#include <stdio.h>
#include <stdlib.h>

/*int main(){
int opcion, i, n, prom = 0, cal;
do {
    prom = 0;
    printf("cuantas calificaciones vas a promediar?: ");
    scanf("%d", &n);
    for (i=1;i<=n; i++){
        printf("ingrese calificacion %d sobre 100: ", i);
        scanf("%d", &cal);
        if (cal >= 0 && cal <= 100){
            prom = prom + cal;
        }
        else{
            printf("calificacion %d invalida.\n", i);
            i--;
        }
    }
    prom = prom / n;
    printf("tu promedio es: %d y", prom);
    if(prom >= 60){
        printf(" aprobatorio \n");
    }
    else{
        printf(" no aprobatorio \n");
    }
    printf("seleccione 1 para salir.\nseleccione 2 para calcular calificacion\n");
    scanf("%d", &opcion);
    system("cls");
} while (opcion != 1);
return 0;
}*/

int main(){
int opcion;
do {
    printf("1. continuar\n");
    printf("2. salir\n");
    scanf("%d", &opcion);

} while (opcion !=2);
return 0;
}
