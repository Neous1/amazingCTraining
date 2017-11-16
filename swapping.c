#include<stdio.h>

int main(void){
    int a, b, temp;

    printf("Enter two numbers \n");
    // scanf("value of a is %d and value of b is %d", &a, &b);
    scanf(" %d %d", &a, &b);

    temp = a; 
    a = b;
    b = temp;
    
    printf("Swapped values are %d and %d\n\n", a, b);

}