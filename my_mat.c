// my_mat.c
#include <stdio.h>

#include "my_mat.h"
void  floydWarshall(int mat[10][10], int i, int j){

    for (int k = 0; k < 10; k++) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (mat[i][j] == 0 && (i!=j) &&(mat[i][k] != 0 && mat[k][j] != 0))
                {
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
                else if (((mat[k][j] != 0) && (mat[i][k] != 0) && (mat[i][j] > (mat[i][k] + mat[k][j]))))
                {
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
                
            }
        }
    }

}


void existPath(int mat[10][10], int i, int j) {
    floydWarshall(mat, i, j);
    if (mat[i][j] > 0){
         printf("True \n");
    }
    else printf("False \n");
}

void shortestPath(int mat[10][10], int i, int j){
    floydWarshall(mat, i, j);
    if (mat[i][j] > 0){
        printf("%d \n", mat[i][j]);
    }
    else printf("-1 \n");
}




