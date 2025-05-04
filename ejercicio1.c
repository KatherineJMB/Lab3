/*
 * int variables
 * scanf para recibir el tamano de la matriz
 * For loop para recorrer la matriz
 * scanf *dentro del for loop* para recibir el valor de las casillas
 * For loop para recorrer e imprimir la matriz 
 * inicializar el sumador de la diagonal 
 *For loop para recorrer la matriz y acumular la suma de la diagonal
 *Printf para mostrar la suma de la diagonal 
*/

#include <stdio.h>

int main () {
        int x,i,j;

        printf("Ingrese el tamano de la matriz:");
        scanf("%d" , &x);
        int matriz[x][x];

        for (i = 0; i < x; i++) {
                for (j = 0; j < x; j++) {
                        printf ("Ingrese el valor de la casilla: ");
                        scanf("%d", &matriz[i][j]);
                }
        }
        for (i = 0; i < x; i++) {
                for (j = 0; j < x; j++) {
                        printf("%d ", matriz[i][j]);
                }
                printf("\n");
        }


        int sumadiagonal = 0 ;
        for (i = 0; i < x; i++) {
                for (j = 0; j < x; j++) {
                        if (i == j) {
                                sumadiagonal +=  matriz[i][j];
                        }
                }
        }

        printf ("La suma de la diagonal principal es: %d\n", sumadiagonal);
        return 0;
}

