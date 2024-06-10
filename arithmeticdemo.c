#include <stdio.h>  
#include <conio.h>  
#include <math.h>  
#include <stdlib.h>  
      
// function declarations   
int addition();  
int subtract();  
int multiply();  
int divide();  
int sq();  
int sqrt1();  
void exit(); 
  
int main()  
{  
    // declaration a local variable op; 
	 
    int op;  
    do
	  
    {  
    
        // displays the multiple operations of  Calculator 
        printf (" Select an operation to perform the calculation in C Calculator: ");  
        printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Square \t \t 6 Square Root \n 7 Exit \n \n Please, Make a choice ");      
          
        scanf ("%d", &op); // accepts a numeric input to choose the operation  
      
      
    // use switch statement to call an operation  
    switch (op)  
    {  
        case 1:  
            addition();             //for additon
            break;
              
        case 2:  
            subtract();           //for subtraction 
            break;  
              
        case 3:  
            multiply();           //for multiply 
            break;  
              
        case 4:  
            divide();           //for divition 
            break;  
              
        case 5:  
            sq();              // for squre
            break; 
              
        case 6:  
            sqrt1();           //for squreroot
            break; 
              
        case 7:  
            exit(0);          //for exiting from this
            break; 
              
        default:  
            printf(" Something is wrong!! ");  
            break;                        
    }  
    printf (" \n \n ******************************************** \n ");  
    } while (op != 7);  
      
  
    return 0;        
}  
  
  
  
// function definition  
// for addition
int addition()  
{  
    int i, sum = 0, num, f_num;                    // declare a local variable   
    printf (" How many numbers you want to add: ");  //for many function addition
    scanf ("%d", &num);  
    printf (" Enter the numbers: \n ");  
    for (i = 1; i <= num; i++)  
    {  
        scanf(" %d", &f_num);  
        sum = sum + f_num;  
    }  
    printf (" Total Sum of the numbers = %d", sum);  
    return 0;  
}  
  
// for subtraction  
int subtract()  
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    res = n1 - n2;    
    printf (" The subtraction of %d - %d is: %d", n1, n2, res);  
}  
  
// for multiplication
int multiply()  
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
    res = n1 * n2;    
    printf (" The multiply of %d * %d is: %d", n1, n2, res);  
}  
  
// for devision 
int divide()  
{  
    int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);  
      
    if (n2 == 0)  
    {  
        printf (" \n Divisor cannot be zero. Please enter another value ");  
        scanf ("%d", &n2);        
    }  
    res = n1 / n2;    
    printf (" \n The division of %d / %d is: %d", n1, n2, res);  
}  
  
// for squre a number  
int sq()  
{  
    int n1, res;  
    printf (" Enter a number to get the Square: ");  
    scanf ("  %d", &n1);  
      
    res = n1 * n1;    
    printf (" \n The Square of %d is: %d", n1, res);  
}  
  
// for squre root  
int sqrt1()  
{  
    float res;  
    int n1;  
    printf (" Enter a number to get the Square Root: ");  
    scanf ("  %d", &n1);  
  
    res = sqrt(n1);   
    printf (" \n The Square Root of %d is: %f", n1, res);  
}
