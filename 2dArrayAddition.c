/**
 * this program will add elements of a 2 d array and print it on a 
 * a third matrix
 */
#include <stdio.h>
#include <math.h>

int main(void){
    //declare your arrays
    int a[3][3], b[3][3], c[3][3], i, j;

    //prompt user for matrix input
    printf("Please enter number for first 3x3 matrix \n");
    for (i =0; i<3; i++){
        for (j=0; j<3; j++){
            scanf("%d", &a[i][i]); //show input at memory address of that position.
        }
        // printf("\n");
    }

    printf("Please enter number for 2nd 3x3 matrix \n");
    for (i =0; i<3; i++){
        for (j=0; j<3; j++){
            scanf("%d", &b[i][i]); //show input at memory address of that position.
        }
        // printf("\n");
    }    
    printf("and the result is \n");
    for (i =0; i<3; i++){
        for (j=0; j<3; j++){
            c[i][j]=a[i][j] + b[i][j];
            printf("%d \t", c[i][j]);
        }
    printf("\n");

    }  
}