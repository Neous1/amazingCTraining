/**
 * If else statements
 * Switch
 * Conditional operator statements
 * go to statements
 */

 #include<stdio.h>

 void main(){
     char gen;
     int age; 

     printf("Enter b for boy and g for girl \n");
     scanf("%c", &gen);
     printf("Enter you age \n");
     scanf("%d", &age);

     if (gen == 'b'){
         if(age >= 18){
             printf("You are eligible \n");
         }
         else{
             printf("You are not eligible \n");
         }
     }else{
         printf("Sorry, girls are not allowed \n");
     }
 }