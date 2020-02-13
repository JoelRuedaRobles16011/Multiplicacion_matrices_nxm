#include <cstdio>

bool dimensionesCorrectas(int c1, int f2){
    if (c1 == f2) return true;
    else {

        printf("\n\n\t!!!No es posible hacer la multiplicacion!!!\n\n\n");

        return false;
    }
}


int main () {

    printf("\n\n\n\t.: Multiplicacion de matrices :. \n\n");

    int filas1, filas2;
    int columnas1, columnas2;

    do {
        printf("Numero de filas [Matriz 1]: ");
        scanf("%i", &filas1);
        printf("Numero de columnas [Matriz 1]: ");
        scanf("%i", &columnas1);

        printf("Numero de filas [Matriz 2]: ");
        scanf("%i", &filas2);
        printf("Numero de columnas [Matriz 2]: ");
        scanf("%i", &columnas2);
    }while(!dimensionesCorrectas(columnas1, filas2));

    printf("\n\n");

    int matriz1[filas1][columnas1];
    int matriz2[filas2][columnas2];
    int resultante[filas1][columnas2];

    /* Lleno la mateiz resultantes con 0s*/
    for(int i = 0; i < filas1; i++){
        for(int j = 0; j < columnas2; j++){
            resultante[j][i] = 0;
        }
    }


    /* Se llenan las matrices manualmente */
    for(int i = 0; i < filas1; i++){
        for(int j = 0; j < columnas1; j++){
            printf("Matriz 1 [%i][%i]: ", i, j);
            scanf("%i", &matriz1[i][j]);
        }
    }

    printf("\n\n");

    for(int i = 0; i < filas2; i++){
        for(int j = 0; j < columnas2; j++){
            printf("Matriz 2 [%i][%i]: ", i, j);
            scanf("%i", &matriz2[i][j]);
        }
    }

    printf("\n\nMatriz 1: \n");

    /* Se imprimen las matrices creadas */
    for(int i = 0; i < filas1; i++){
        printf("\t");
        for(int j = 0; j < columnas1; j++){
            printf("%i ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\n\nMatriz 2: \n");

    for(int i = 0; i < filas2; i++){
        printf("\t");
        for(int j = 0; j < columnas2; j++){
            printf("%i ", matriz2[i][j]);
        }
        printf("\n");
    }


    /* Aqui se hace la operacion de multiplicacion */

    for(int i = 0; i < columnas2; i++){
        for(int j = 0; j < filas1; j++){
            for(int k = 0; k < columnas1; k++){

                resultante[j][i] += matriz1[j][k] * matriz2[k][i];
            }
        }
    }

    printf("\n\nMatriz resultante: \n");


    /* Se imprimen la matriz resultante */
    for(int i = 0; i < filas1; i++){
        printf("\t");
        for(int j = 0; j < columnas2; j++){
            printf("%i ", resultante[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}
