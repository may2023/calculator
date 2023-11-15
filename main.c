
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"
#include<stdio.h>

int main(){
     int operation;
     int num1, num2, result;
     
     printf("Enter 1 perform add\n");
     printf("Enter 2 perform sub\n");
     printf("Enter 3 perform div\n");
     printf("Enter 4 perform mul\n");

     printf("Enter a number: ");
     scanf("%d", &operation);

     printf("Enter num1 : ");
     scanf("%d", &num1);
     printf("Enter num2: ");
     scanf("%d", &num2);
    // result = addition(num1, num2);
    // result = subtraction(num1, num2);
    // result = multiplication(num1, num2);
    // result = division(num1, num2);
    // printf("Result : %d\n",  result );

    
    
    switch (operation)
    {
    case 1:
        
         result = addition(num1, num2);
         printf("Result : %d\n",  result );
        break;
    case 2:
        
         result = subtraction(num1, num2);
         printf("Result : %d\n",  result );
        break;
    case 3:
        
         result = division(num1, num2);
         printf("Result : %d\n",  result );
        break;
    case 4:
        
         result = multiplication(num1, num2);
         printf("Result : %d\n",  result );
        break;
        
    default:
        break;
    }


    

    return 0;
     
      
}