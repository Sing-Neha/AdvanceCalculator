//Header file for advance calculater
//===========================================================================
#include<math.h>
// for log function
int logarithm()
{

	double number,res;
	printf("\n\tEnter a number to find Natural Logaritham");
	scanf("%lf",&number);
res=log(number);
printf("\tYour Result is : %.2lf\n",res);
return 0;
	
}
//for base 10 logarithm
int logarithmten()
{

	double number,res;
	printf("\n\tEnter a number to find base10 logaritham");
	scanf("%lf",&number);
res=log10(number);
printf("\tYour Result is : %.2lf\n",res);
return 0;
	
}
//for exponential 
int Exponential(int x,int n)
{
	int i;
double value=1;
for(i=1;i<=n;++i)
{

value=value*x;
}
return (value);
	
}
  
// function definition  
// for addition
int addition()  
{  
    int i, sum = 0, num, f_num;                    // declare a local variable   
    printf (" \tHow many numbers you want to add: ");  //for many function addition
    scanf ("%d", &num);  
    printf (" \tEnter the numbers:  ");  
    for (i = 1; i <= num; i++)  
    {  
   scanf(" %d", &f_num);  
        sum = sum + f_num;  
    }  
    printf (" \tTotal Sum of the numbers = %d\n", sum);  
    return 0; 
}
// for subtraction  
int subtract()  
{  
    int n1, n2, res;  
    printf (" \tThe first for substraction number is: ");  
    scanf ("  %d", &n1);  
    printf ("\t The second for substraction number is: ");  
    scanf ("  %d", &n2);  
    res = n1 - n2;    
    printf (" \n\tThe subtraction of %d - %d is: %d\n", n1, n2, res);  
}  
  
// for multiplication
int multiply()  
{  
/*   int n1, n2, res;  
    printf (" The first number is: ");  
    scanf ("  %d", &n1);  
    printf (" The second number is: ");  
    scanf ("  %d", &n2);
    res = n1 * n2;    
  
    res = n1 * n2;    
    printf (" The multiply of %d * %d is: %d", n1, n2, res);
	*/  
 int i;
 float mult= 1, num, f_num;                    // declare a local variable   
    printf (" \tHow many numbers you want to multiply: ");  //for many function addition
    scanf ("%f", &num);  
    printf (" \tEnter the numbers:  ");  
    for (i = 1; i <= num; i++)  
    {  
	 scanf(" %f", &f_num);  
        mult = mult *f_num;  
    }  
    printf (" \tTotal Multiplication of the numbers = %f\n", mult);  
    return 0; 

}  
  
// for devision 
int divide()  
{  
    int n1, n2, res;  
    printf (" \tEnter dividend: ");  
    scanf ("  %d", &n1);  
    printf (" \tEnter divisor: ");  
    scanf ("  %d", &n2);  
      
    if (n2 == 0)  
    {  
        printf (" \n\t Divisor cannot be zero. Please enter another value ");  
        scanf ("%d", &n2);        
    }  
    res = n1 / n2;    
    printf (" \n\t The division of %d / %d is: %d\n", n1, n2, res);  
}  
  
  // for reminder
int reminder()  
{  
    int n1, n2, res;  
    printf ("\t Enter Dividend: ");  
    scanf ("  %d", &n1);  
    printf ("\t Enter Divisor: ");  
    scanf ("  %d", &n2);  
      
    if (n2 == 0)  
    {  
        printf (" \n\t Divisor cannot be zero. Please enter another value ");  
        scanf ("%d", &n2);        
    }  
    res = n1 % n2;    
    printf (" \n\t The Reminder of %d & %d is: %d\n", n1, n2, res);  
}  
  
  
// for squre a number  
int sq()  
{  
    int n1, res;  
    printf (" \tEnter a number to get the Square: ");  
    scanf ("  %d", &n1);  
      
    res = n1 * n1;    
    printf (" \n\t The Square of %d is: %d\n", n1, res);  
}  
  
// for squre root  
int sqrt1()  
{  
    float res;  
    int n1;  
    printf (" \tEnter a number to get the Square Root: ");  
    scanf ("%d", &n1);  
  
    res = sqrt(n1);   
    printf (" \n\t The Square Root of %d is: %f\n", n1, res);
	return 1;  
}
