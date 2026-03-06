#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp [24];
    float temp1, temp2;
    int dummy;
    temp [0]=20.5;
    temp [1]=10.2;
    printf("Direccion de mem de 2 flotantes: &temp1: %i,\n&temp2 %i\n", &temp1, &temp2);
    printf("Direccion de temp: %i\n", temp);
    printf("Direccion de &temp[23]: %i\n", &temp[23]);
    printf("Direccion de &dummy: %i\n", &dummy);
    printf("temp 1: %f\n", temp[0]);
    printf("temp 2: %f", temp[1]);
    return 0;
}
