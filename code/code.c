#include <stdio.h>

#define SIZE 2

void operation(int[][SIZE] ,int[][SIZE] ,int[][SIZE] ,int );

int main(void){

    int A[SIZE][SIZE] = {{2,3},{5,7}};
    int B[SIZE][SIZE] = {{0,4},{-1,7}};
    int C[SIZE][SIZE] = {{1,0},{-1,4}};

    int I[SIZE][SIZE] = {{1,0},{0,1}};

    int cont = 1;
    int result[SIZE][SIZE] = {{0,0},{0,0}};

    operation(result,A,C,cont);     //result = AC

    operation(result,B,B,cont);     //result = AC+B^2
    cont=-10;
    operation(result,I,C,cont);     //result = AC+B^2-10IC = AC+B^2-10C

    for (int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++)
            printf("%3d ",result[i][j]);
        printf("\n");
    }    
}

void operation(int answer[SIZE][SIZE], int first[SIZE][SIZE], int last[SIZE][SIZE], int constant){

    int val=0;

    //matrix multiplication of first and last in which first matrix is multiplied with constant 
    // and result stored in answer array
    for (int row=0; row<SIZE; row++){
        for(int col=0; col<SIZE; col++){
            for(int ext=0; ext<SIZE; ext++){
                val+= constant * first[row][ext] * last[ext][col];
            }
            answer[row][col] += val;
            val = 0;
        }
    }
    return ;
}