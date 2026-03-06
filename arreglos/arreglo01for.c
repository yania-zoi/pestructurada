#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp [24];
    float temp1, temp2;
    int dummy;
    int i, N=4;

    printf("temp 1: %f\n", temp[0]);
    printf("temp 2: %f", temp[1]);

    for(i=0;i<N;i++){
        printf("ingrese la temperatura: \n");
        scanf("%f", &temp[i]);
    }
    for(i=0;i<N;i++){
        printf("temperatura: %f\n", temp[i]);
    }

    return 0;
}
