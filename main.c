#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;
    int longitud;
    char alumno1[16] = "Antonio perez";
    printf("%s\n", alumno1);

    char alumno2[16] = "Ergar sainz";
    printf("%s", alumno2);

    fgets(alumno1, sizeof(alumno1), stdin);
    fgets(alumno2, sizeof(alumno2), stdin);

    char nombres[5][16];

    for(i=0;i<3;i++){
        printf("ingrese nombre %d: ", i+1);
        fgets(nombres[i], sizeof(nombres[i]), stdin);

        nombres[i][strcspn(nombres[i], "\n")] = 0;

        longitud = strlen(nombres[i]);
        printf("la longitud de %s es %d \n", nombres[i], longitud);
    }


    return 0;

}
