#include "my_mat.h"
#include <stdio.h>

int main() {

    int mat[10][10];
    int i=0, j=0;
    char choose;


    
    scanf("%c",&choose);

    while (choose != 'D' && choose != 'EOF'){
        

        if(choose == 'A')
        {
            for (int i=0; i<10; i++){
                for (int j=0; j<10; j++){
                    scanf("%d", &mat[i][j]);
                }
             }

        }

        if(choose == 'B'){
            scanf ("%d %d", &i, &j);
            
            existPath(mat,i,j);
      
        }

         if(choose == 'C'){

            scanf ("%d %d", &i, &j);
            
            shortestPath(mat,i,j);
      
        }


      scanf(" %c", &choose);
    }


    return 0;



}
