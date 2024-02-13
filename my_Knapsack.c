#include <stdio.h>

#define MAX_WEIGHT 20
#define NUM_OBJ 5

int max(int a, int b) {
    if(a>b) {
        return a;
    }
    return b;
}

int knapSack(int weights[], int values[], int selected_bool[]) {
    int i, w;
    int K[NUM_OBJ + 1][MAX_WEIGHT + 1];

    for (i = 0; i <= NUM_OBJ; i++) {
        for (w = 0; w <= MAX_WEIGHT; w++) {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (weights[i - 1] <= w)
                K[i][w] = max(values[i - 1] + K[i - 1][w - weights[i - 1]], K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }

    int res = K[NUM_OBJ][MAX_WEIGHT];
    w = MAX_WEIGHT;
    for (i = NUM_OBJ; i > 0 && res > 0; i--) {
        if (res == K[i - 1][w])
            continue;
        else {
            selected_bool[i - 1] = 1; 
            res = res - values[i - 1];
            w = w - weights[i - 1];
        }
    }

    return K[NUM_OBJ][MAX_WEIGHT];
}

int main() {

    char items[NUM_OBJ];	
    int weights[NUM_OBJ];
    int values[NUM_OBJ];
    int selected_bool[NUM_OBJ] = {0}; 

    for(int i=0; i<NUM_OBJ; i++) {
    	scanf("%s", &items[i]);
        scanf("%d", &values[i]);
        scanf("%d", &weights[i]);
    }

    printf("Maximum profit: %d\n", knapSack(weights, values, selected_bool));

    printf("Selected items:");
    for(int i=0; i<NUM_OBJ; i++) {
        if(selected_bool[i]==1) {
            printf(" %c", items[i]);
        }
    }
    printf("\n");
    return 0;
    }
    

