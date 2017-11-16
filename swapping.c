#include<stdio.h>

int main(void){
    // int a, b, temp;

    // printf("Enter two numbers \n");
    // // scanf("value of a is %d and value of b is %d", &a, &b);
    // scanf(" %d %d", &a, &b);

    // temp = a; 
    // a = b;
    // b = temp;
    
    // printf("Swapped values are %d and %d\n\n", a, b);


    /**
     * how to swap the values of 2 variable with just 2 variables
     */

    int c, d ;

    printf("Enter two numbers \n");
    // scanf("value of a is %d and value of b is %d", &a, &b);
    scanf(" %d %d", &c, &d);

    c = c + d; // clear the value at c
    d = c - d; // put value of d in c
    c = c - d; // put value c in d
    
    printf("Swapped values are %d and %d\n\n", c, d);

}