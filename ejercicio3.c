/*
 *Inicializacion de variables 
 *Creacion de un for loop anidado 
 *if para encontrar 1
 *sumar contador si es 1
 *Reiniciar contador sino es 1
 *if para ver el valor maximo que alcanza el contador
 *Devolver el numero de valores maximo 
 */

#include <stdio.h>

#define SIZE 5

int findLargestLine(int matrix [SIZE][SIZE]) {
int filas = SIZE;
int columnas = SIZE;
int contadormaximo = 0;

    int contador1 = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
		if (matrix[i][j] == 1) {
			contador1 += 1;

                } else {
			contador1 = 0;
		}	
        }
    }	

    if (contador1 > contadormaximo) {
	    contadormaximo = contador1;
    }
    return contadormaximo;
}

int main () {
        int matrix [SIZE][SIZE] = {
                {0, 1, 1, 1, 0},
                {0, 1, 1, 1, 1},
                {1, 1, 1, 1, 0},
                {0, 1, 1, 0, 1},
                {1, 0, 1, 0, 1},  
        };

        int largestLine = findLargestLine(matrix);
        printf("El tamano de la secuencia de 1s mas grande es: %d\n", largestLine);
        return 0;
}

