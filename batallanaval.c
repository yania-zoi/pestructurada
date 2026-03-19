#include <stdio.h>
#include <string.h>
//mostrar el tablero
void mostrarTablero(int tablero[5][5]){

    printf("\n  0 1 2 3 4\n");

    for(int i=0;i<5;i++){
        printf("%d ",i); //imprime numero de fila
        
        for(int j=0;j<5;j++){
            if(tablero[i][j]==0 || tablero[i][j]==1)
                printf("~ ");
            else if(tablero[i][j]==2)
                printf(". ");
            else if(tablero[i][j]==3)
                printf("X ");
        }

        printf("\n");
    }
}

int main(){

    int tablero1[5][5];
    int tablero2[5][5];
    int fila,columna;
    int barcos1 = 3;
    int barcos2 = 3;
    int turno = 0;
    char jugadores[2][20];
    
    //solicitar nombres
    printf("Nombre del jugador 1: ");
    fgets(jugadores[0],20,stdin);
    jugadores[0][strcspn(jugadores[0],"\n")] = 0;

    printf("Nombre del jugador 2: ");
    fgets(jugadores[1],20,stdin);
    jugadores[1][strcspn(jugadores[1],"\n")] = 0;

    // Inicializar tableros
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            tablero1[i][j]=0;
            tablero2[i][j]=0;
        }
    }

    // Nombres de barcos
    char nombresBarcos[3][20]={
        "Portaaviones",
        "Destructor",
        "Submarino"
    };

    // Barcos del primer jugador
    tablero1[1][2]=1;
    tablero1[3][4]=1;
    tablero1[0][0]=1;

    // Barcos del segundo jugador
    tablero2[2][1]=1;
    tablero2[4][3]=1;
    tablero2[0][4]=1;

    printf("\n--- BATALLA NAVAL ---\n");

    do{
        //turno de cada jugador
        printf("\nTurno de %s\n", jugadores[turno]);
        // Mostrar el tablero enemigo que se está atacando
        if(turno==0){
            printf("\nTablero enemigo:\n");
            mostrarTablero(tablero2);
        }
        else{
            printf("\nTablero enemigo:\n");
            mostrarTablero(tablero1);
        }
        // Pedir coordenadas de disparo
        printf("Fila: ");
        scanf("%d",&fila);

        printf("Columna: ");
        scanf("%d",&columna);
        // Validar coordenadas
        if(fila<0 || fila>4 || columna<0 || columna>4){
            printf("Coordenadas fuera de rango\n");
            continue;
        }
        // Turno del jugador 1 (donde ataca tablero2)
        if(turno==0){
            // Si hay barco
            if(tablero2[fila][columna]==1){
                printf("%s impactó un barco enemigo!\n",jugadores[0]);
                tablero2[fila][columna]=3;
                barcos2--;
            }
            // Si ya disparó ahí antes
            else if(tablero2[fila][columna]==2 || tablero2[fila][columna]==3){
                printf("Ya disparaste ahí\n");
                continue;
            }
            // Disparo al agu
            else{
                printf("Disparo fallido\n");
                tablero2[fila][columna]=2;
            }
        }
        //es lonmismo pero pal otro jugador
        else{

            if(tablero1[fila][columna]==1){
                printf("%s impactó un barco enemigo!\n",jugadores[1]);
                tablero1[fila][columna]=3;
                barcos1--;
            }

            else if(tablero1[fila][columna]==2 || tablero1[fila][columna]==3){
                printf("Ya disparaste ahí\n");
                continue;
            }

            else{
                printf("Disparo fallido\n");
                tablero1[fila][columna]=2;
            }
        }
        // Cambiar turno de jugador
        turno = 1 - turno;

    }while(barcos1>0 && barcos2>0); // termina cuando uno pierde todos sus barcos
    // Mostrar ganador
    if(barcos1==0)
        printf("\n%s ganó la partida\n", jugadores[1]);
    else
        printf("\n%s ganó la partida\n", jugadores[0]);

    return 0;
}
