#include<stdio.h>
int main(){
    int A[3][3];
    printf("Enter input for mat A: ");
    int i,j;

    for (i=0 ; i <3 ; i++){

                for (j=0 ; j< 3 ; j++){
                            scanf("%d",&A[i][j]);

                }


    }
    printf("The matrix [A]: \n");
        for (i=0 ; i <3 ; i++){

                for (j=0 ; j< 3 ; j++){
                            printf("%d ",A[i][j]);

                }
                printf("\n");


    }

    int B[3][3];
    printf("Enter input for mat B: ");
    int x,y;

    for (x=0 ; x <3 ; x++){

                for (y=0 ; y< 3 ; y++){
                            scanf("%d",&B[x][y]);

                }


    }
    printf("The matrix [B]: \n");
        for (x=0 ; x <3 ; x++){

                for (y=0 ; y< 3 ; y++){
                            printf("%d ",B[x][y]);

                }
                printf("\n");


    }
    int p,q;
    int C[p][q];

    printf("[C]: %d",C[p][q]);

    return 0;

}
