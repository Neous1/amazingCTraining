#include<stdio.h>

void main(){
    char ch;
    printf("Enter any character \n");
    scanf("%c", &ch); //read the char adn store it in the variable ch;
    printf("ASCII value of %c is %d\n", ch, ch);
}