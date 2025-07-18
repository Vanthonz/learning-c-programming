# include <stdio.h>

int main () {

    int A[4][4] ={{1,2,3,3}, {7,6,5,5}, {1,9,0,8}, {1,2,3,5}};

    // printf("%d",A[3][3]);


    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ", A[i][j]);

        }
        printf("\n");
    }

    return 0;
}