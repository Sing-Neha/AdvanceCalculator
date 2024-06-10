/* PROJECT ON ADVANCED CALCULATOR */
#include <windows.h>
#include<string.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>  
#include <math.h>  
#include"arithmetical.h" 
#include"binarycon.h"
#define PI 3.14159
#include"tangent.h"
#include"temperature.h"
#include"advancecal.h"
#include"mensuration.h"
#include"weight.h"
#include"distance.h"
#define note "maze mat lo, enter the valid operation"
void exit();
void main()
{
   /* HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);*/
   // SetConsoleTextAttribute(hConsole, BACKGROUND_WHITE);
    char uname[]={"TPG"},upass[]={"tpg@123"},ch,ename[20],epass[20];
	int range,i;
   login:
	printf("\n\n\t\t\t\t\t\t\t\033[1;32m * Enter Your UserName : \033[0m");
	gets(ename);
	printf("\n\t\t\t\t\t\t\t\033[1;32m * Enter Your Password : \033[0m");
	range=strlen(upass);
	for(i=0;i<range;i++)
	{
		epass[i]=getch();
		printf("*");
	}
    epass[i]='\0';
    //condition is for login
    	if(strcmp(uname,ename)==0 && strcmp(upass,epass)==0)
	{
	
	int option,suboption1,suboption2,suboption3,suboption4,suboption5,suboption6,suboption7,suboption8,suboption9,suboption11;
	int res,x,n;
	float a,b,res1;
	double originalValue,res2,f;
	long long c;
    /*Heading*/
    do 
	{
		start:
	printf("\n\n\n");
	for(i=0;i<57;i++)
	   printf("*");
	printf("\033[1;35mADVANCE CALCULATOR\033[0m");
	for(i=1;i<57;i++)  
	   printf("*");
	printf("\n\n\t\t\033[1;34mTHE PROGRAMMERS GANG\033[0m\t\t\t\t\t\t\t\033[1;34mProject Manager :\033[0m Shaireen\n");
	printf("\t\t \033[1;34m--------------------\033[0m\t\t\t\t\t\t\t\033[1;34mTeam Leader \t:\033[0m Mahfuz Idrishi\n\n\n");
	  for(i=1;i<7;i++)
	  printf("\t");
	 
    printf("WELCOME VISITER\n");
    for(i=1;i<7;i++)
	  printf("\t");
	printf("-----------------\n\n\n"); 
	
	//Print for user choice
	
		for(i=1;i<7;i++)
	  printf("\t");
	 
    printf("Enter Your Desire Key :\n");
    for(i=1;i<7;i++)
	  printf("\t");
	printf("------------------------\n\n"); 
	
	/*Print function for operation selection*/
	
	printf("\t(1) For Simple Arithematical Operation.\n\t(2) For Distance Calculation.\n\t(3) For Weight Calculation.\n\t(4) For Tangent Calculation.\t\t\t\t\t\t\t\t\t(11) For View The Developer\n");
    printf("\t(5) For Binary Calculation.\n\t(6) For Temperature Calculation.\n\t(7) Round Calculation.\n\t(8) Mensuration Calculation.\n");
    printf("\t(9) Advance Calculation.\n\t(10) For Exit\n\n\n");
    fflush(stdin);
    printf("\tEnter Your Key Here :- ");
	scanf("%d",&option);
	/*Outer switch*/
	switch(option)
	{
		/*This case is for arithmetical calculation*/
		
	  case 1:
	  	    /*Print function for option selection for simple arithematical calculation*/
	  	    
	     printf("1. For Addition.\n2. For Substraction.\n3. For Multiplication.\t\t\t\t\t\t\t\t\t***Press 0 to quit the program***\n4. For Division.\n5. For Reminder.\n");		 
		 printf("6. For Square.\n7. For Square Root.\n8. For Natural Logarithm.\t\t\t\t\t\t\t\t***Press 99 to restart the calculation ***\n9. For Base-10 Logrithm.\n10. For Exponent.\n\n");
		 
		 while(1)
		 {
		 	for(i=0;i<5;i++)
		 		printf("\t");
		 printf("Enter the operation in Arithmetical Calculation you want to do.");
		 fflush(stdin);
	     scanf("\t%d",&suboption1);

	   	/*Print function for read input from */

	     /*First Inner Switch*/
		 switch(suboption1)
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
		  reminder();
		  break;    
        case 6:  
            sq();              // for squre
            break; 
              
        case 7:  
            sqrt1();           //for squreroot
            break; 
               case 8:  
            logarithm();           //for logarithm
            break; 
              case 9:  
            logarithmten();           //for base-10 logarithm
            break;
			  case 10:  
               
               printf(" \tFind exponential value:\n ");
               printf(" \tplease Enter the base :");
               scanf("%d",&x);
            printf(" \tplease Enter the exponent :");
            scanf("%d",&n);
            res2=Exponential(x,n);//calling function
            printf("\tThe value of %d to the %d power is %f\n",x,n,res2);           //for exponential
            break;  
        case 0:  
            exit(0);          //for exiting from this
            break; 
         case 99:
		   goto start;     
        default:  
           printf("\n********** %s ***********\n",note); 
            break;                   //break for first's inner switch first case
		 }	
		
	}
		 /*This case is for Distance Calculation*/
		  case 2:
	  	    /*Print function for option selection for distance calculation*/
	    printf("1. KM_to_Meter.\n2. Meter_to_KM.\n3. Cm_to_Meter.\t\t\t\t\t\t\t\t\t***Press 0 to quit the program***\n4. Meter_to_Cm.\n5. Dm_to_Meter.\n");		 
	    printf("6. Meter_to_Dm.\t\t\t\t\t\t\t\t\t***Press 99 to restart the calculation ***\n7. Mm_to_Meter.\n8. Meter_to_Mm.\n9. Micro_m_to_Meter.\n10. Meter_to_micro_m.\n");
	    printf("11. Pico_m_to_meter\n12. Meter_to_pico_m\n\n\n"); 
		 while(1)
	     {
	     	/*Print function for read input from */
	     	for(i=0;i<7;i++)
	     	     printf("\t");
        	printf("Enter A Number For Your Distance Calculation :- ");
	        fflush(stdin);
	        scanf("%d",&suboption2);
	     /*Second Inner Switch*/
		 switch(suboption2)
		 {
		    case 1:
                    km_to_meter();
                    break;
                case 2:
                    meter_to_km(); 
                    break;
                case 3:
                    cm_to_meter();
                    break;
                case 4:
                    meter_to_cm();
                    break;
                case 5:
                    dm_to_meter();
                    break;
                case 6:
                     meter_to_dm();
                    break;
                case 7:
                     mm_to_meter();
                    break;
                case 8:
                     meter_to_mm();
                    break;
                case 9:
                    micro_m_to_meter();
                    break;
                case 10:
                    meter_to_micro_m();
                    break;
                case 11:
                    pico_m_to_meter();
                    break;
                case 12:
                    meter_to_pico_m();
                case 0:
                    break;
                    exit(0);
                case 99:
                	goto start;
                default:
                    printf("\n********** %s *******\n",note);
        }
    
		 }
	
		 /*case is for weight calculation*/
		  case 3:
	  	    /*Print function for option selection for weight calculation*/
	     printf("(1) Convert Kilogram To Pound.\n(2) Convert Kilogram To Gram.\t\t\t\t\t\t\t\t\t***Press 0 to Quit the program***\n(3) Convert Kilogram To Ton.\t\t\t\t\t\t\t\t\t***Press 0 to Restart the program***\n(4) Covert Kilogram To Miligram.\n(5) Convert Kilogram To Microgram.\n\n");
	     
	     /*Second Inner Switch*/
	

	while(1)
	{
		for(i=0;i<7;i++)
		printf("\t");
	printf("Enter A Number For Your Weight Calculation :- ");
	scanf("%d", &suboption3);
	switch(suboption3) {
		case 1:
			pound();
			break;
		case 2:
			gram();
			break;
		case 3:
			ton();
			break;
		case 4:
			miligram();
			break;
		case 5:
			microgram();
			break;
		case 99:
			goto start;
		case 0:
		    exit(0);	
		default:
		   printf("\n********** %s ***********\n",note);
		   break;		
	}
}
		 case 4:
		 		
	         	printf("\n\n(1) To Calculate Sin angle.\t\t\t\t\t\t\t\t\t***Press 0 to quit the program***\n(2) To Calculate Cosine angle.\n(3) To Calculate Tangent angle.\t\t\t\t\t\t\t\t\t***Press 99 for restart the program***\n\n\n");
	while(1)
	{
for(i=0;i<5;i++)
		 		printf("\t");
		 printf("Enter the operation in Angle Calculation you want to do.");
	scanf("%d", &suboption4);
	switch(suboption4) {
		case 1:
			calculateSine();
			break;
		case 2:
			calculateCosine();
			break;
		case 3:
			calculateTangent();
			break;
		case 4:
			printf("Invalid Input");
			break;
		case 99:
			goto start;
		case 0:
		    exit(0);	
		default:
		   printf("\n********** %s ***********\n",note);
		   break;		
	}
}
		 
		 
		 /*Case is for binary calculation*/
		 
		 case 5:
	  	    /*Print function for option selection for binary conversion calculation calculation*/
	     printf("(1) Convert Binary To Decimal.\t\t\t\t\t\t\t\t\t***Press 0 to quit the program***\n(2) Convert Binary To Octal.\t\t\t\t\t\t\t\t\t***Press 99 to Restart the program***\n(3)  Convert Binary To HexaDecimal.\n\n");
	     fflush(stdin);
	     while(1)
	     {
         printf("\n\t\t\t\t\t\t\tEnter A Number For Your Binary Calculation :- ");
	     scanf("%d",&suboption5);
	   	/*Print function for read input from */
        	
	     /*First Inner Switch*/
		 switch(suboption5)
		 {
		    case 1:
		    		printf("\tEnter binary number :- ");
	        scanf("%lld",&c);
			 res = binarytodecimal(c);
			 printf("\tDecimal Value is : %d",res);
			break;           //break for first's inner switch first case
			case 2:
					printf("\tEnter binary number :- ");
	        scanf("%lld",&c);
			 res = binarytooctal(c);
			 printf("\tOctal Value is : %d",res);
			break;	          //break for first's inner switch first case
			case 3:
					printf("\tEnter binary number :- ");
	        scanf("%lld",&c);
			 res = binarytohexa(c);
			 printf("\tHexadecimal Value is : %d",res);
			break;	
			          //break for first's inner switch first case
		 case 0:
                    exit(0);
			case 99:
				goto start;
			default:
			printf("\n********** %s ***********\n",note);
			break;	
		 }	
	}
		 
		 case 6:
		 	
		 	 printf("\t\tWelcome to the find the Temprature calculator!!\n\n");
    int choice;
 
    printf("Enter 1 for => celsius_to_fahrenheit \n");
    printf("Enter 2 for => fahrenheit_to_celsius \n");
    printf("Enter 3 for => Celsius_to_Kelvin \t\t\t\t\t\t*** Press 0 to Quit the program ***\n");
    printf("Enter 4 for => Kelvin_to_Celcius \t\t\t\t\t\t*** Press 99 to Restart the calculation ***\n");
    printf("Enter 5 for => Fahrenheit_to_Kelvin\n");
    printf("Enter 6 for => Kelvin_to_Fahrenheit \n");
    
    while(1){    
    printf("\n\n\t\t\t\t\t\t\tEnter the operation you want to do: ");
    
    scanf("%d",&suboption6);
            
    switch(suboption6)
    {
                case 1:
                    celsius_to_fahrenheit();
                    break;
                case 2:
                    fahrenheit_to_celsius();
                    break;
                case 3:
                    Celsius_to_Kelvin();
                    break;
                case 4:
                    Kelvin_to_Celcius();
                    break;
                case 5:
                    Fahrenheit_to_Kelvin();
                    break;
                case 6:
                    Kelvin_to_Fahrenheit();
                    break;
                 case 0:
                    exit(0);
                 case 99:
				 goto start;   
                default:
                    printf("\n********** %s ***********\n",note);
        }
	}
		 	
		 	 /*This case is for Round Calculation*/
		  case 7:
	  	    /*Print function for option selection for distance calculation*/
		 printf("(1) Enter 1 for Calculate Round Value\t\t\t\t\t\t**** Press 0 to quit the program ***\n");
	     printf("\n\t\t\t\t\t\t\t\t\t\t*** Press 99 to restart the calculation ***\n\n");
		 fflush(stdin);
	       while(1)
         {
         	for(i=0;i<7;i++)
         	printf("\t");
         	 printf("Enter Your Choice Here : ");
	     scanf("%d",&suboption7);
	     /*Inner Switch For Round Calculation*/
		 switch(suboption7)
		 {
		    case 1:
                 printf("\n\tEnter the original value: ");
                 scanf("%lf", &originalValue);

                   // Calculate the rounded value
                double roundedValue = round(originalValue);

                printf("\tOriginal Value: %f\n", originalValue);
            printf("\tRounded Value: %f\n", roundedValue);
			break; 
			case 0:
			   exit(0);             //break for second's inner switch first case
			case 99:
				goto start;
				break;
			default :
			 printf("\n********** %s ***********\n",note);
			 break;             //break for default case
		 }
	}
	
		 /*This case is for Mensuration Calculation*/
		  case 8:
	  	    /*Print function for option selection for quit or restart calculation*/
	  	    
	  	    	//print function for operation selection
	      printf("\n\nAdvanced Geometric Calculator\n");
          printf("1. Rectangle\n");
          printf("2. Circle\t\t\t\t\t\t\t\t\t*** Press 0 to quit the program ***\n");
          printf("3. Triangle\t\t\t\t\t\t\t\t\t*** Press 99 to restart the calculation ***\n");
          printf("4. Square\n\n");
         while(1)
         {
         for(i=0;i<7;i++)
         printf("\t");
          printf("Enter A Number For Your Mensuration Calculation :-  ");
	     fflush(stdin);
	     scanf("%d",&suboption8);
	     
	     /*Inner Switch For Mensuration Calculation*/
		 switch(suboption8)
		 {
		     case 1:{
		 // Rectangle
            printf("\tEnter length of rectangle: ");
            scanf("%f", &a);
            printf("\tEnter width of rectangle: ");
            scanf("%f", &b);
            
            printf("\tArea of rectangle: %.2f\n", calculateRectangleArea(a, b));
            printf("\tPerimeter of rectangle: %.2f\n", calculateRectanglePerimeter(a, b));
            break;
		}
           
            
        case 2:{
            // Circle
            printf("\tEnter radius of circle: ");
            scanf("%f", &a);
            
            printf("\tArea of circle: %.2f\n", calculateCircleArea(a));
            printf("\tCircumference of circle: %.2f\n", calculateCircleCircumference(a));
            break;
        }
           
            
        case 3:
           {
           	 // Triangle
            printf("\tEnter base of triangle: ");
            scanf("%f", &a);
            printf("\tEnter height of triangle: ");
            scanf("%f", &b);
            
            printf("\tArea of triangle: %.2f\n", calculateTriangleArea(a, b));
            break;
            
		   }
        case 4:
           {
           	 // Square
           
            printf("\tEnter side length of square: ");
            scanf("%f", &a);
            
            printf("\tArea of square: %.2f\n", calculateRectangleArea(a, a)); // Square is a special case of a rectangle
            printf("\tPerimeter of square: %.2f\n", calculateRectanglePerimeter(a, a));
            break;
		   }
            
			case 0:
				exit(0);
			
			case 99:
				goto start;
				break;
			default :
			 printf("\n********** %s ***********\n",note);
			 break;             //break for default case
		 }
	}
	
	
	/*case for advance operation*/
	case 9:
			printf("\n\n(1) To Calculate Permutation\t\t\t\t\t*** Press 0 to quit the program ***\n(2) To Calculate Combination.\t\t\t\t\t*** Press 99 to restart the calculation ***\n(3) To Calculate Factorial\n\n\n");
	while(1)
	{
		for(i=0;i<7;i++)
		{
			printf("\t");
		}
	printf("Enter A Number For Your Advance Calculation :-  ");
	scanf("%d", &suboption9);
	switch(suboption9) {
		case 1:
			printf("\n\tEnter the value of n : ");
			scanf("%f",&a);
				printf("\tEnter the value of r : ");
			scanf("%f",&b);
			res1=combination(a,b);
			printf("\tYour Combination Is : %f\n",res1);
			break;
		case 2:
		printf("\n\tEnter the value of n : ");
			scanf("%f",&a);
				printf("\tEnter the value of r : ");
			scanf("%f",&b);
			res1=permutation(a,b);
			printf("\tYour Permutation Is : %f\n",res1);
			break;
		case 3:
				printf("\n\tEnter the value for factorial :");
			scanf("%lf",&f);
			res2=factorial(f);
			printf("\tYour Factorial Is : %.2lf\n",res2);
			break;
		case 99:
			goto start;
		case 0:
		    exit(0);	
		default:
		   printf("\n********** %s ***********\n",note);
		   break;		
	}
}
		  
		 case 10:
		 	exit(0);
		 	break;
		case 11:
		 printf("\n\n1. For View Details.\n0. For Exit.\n99. For Restart. \n\n");  
		while(1)
		{
	     //This is for developer details
		for(i=0;i<7;i++)
	         printf("\t");
		     printf("Enter the operation you want to do: ");
	scanf("%d", &suboption11);
	switch(suboption11)
	{
		//This is for the developer details
			case 1:
				
					printf("\n -**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n         #-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#");
    printf("\n         #                 WELCOME                   #         ");
    printf("\n         #                   TO                      #");
    printf("\n         #                 ADVANCE                   # ");
    printf("\n         #                CALCULATOR                 #");
    printf("\n         #-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#@@@@@@@@@@@@||");
    printf("\n                                                                  ||");
	printf("\n                                                             ************");
	printf("\n                                                             Developed By");
	printf("\n                                                             ************");
	printf("\n                                                                  ||");
	printf("\n                                                                  ||");
    printf("\n                                                              ");
    printf("\n\t\t\t\t\t              => The Programmer Gang <=                  ");
    printf("\n\t\t\t  ****************************************************************************************");
    printf("\n\t\t\t  !*!                              Team Members            College Name                !*!");
    printf("\n\t\t\t  !*!                             ````````````             ````````````                !*!");
    printf("\n\t\t\t  !*!  Project Manager:   !*!     Vivek Kumar Mishra  !*!  SHEAT College Babatpur VNS  !*!");
    printf("\n\t\t\t  !*!  Shaireen           !*!     Deepak Yadav        !*!  MVIET Kaushambi             !*!");
	printf("\n\t\t\t  !*!                     !*!     Shaireen            !*!  GGP Varanas                 !*!");
    printf("\n\t\t\t  !*!                     !*!     Raginee Yadav       !*!  GGP Amethi                  !*!");
    printf("\n\t\t\t  !*!  Team Leader:       !*!     Shubham Vishwakarma !*!  Handia PG College Prayagraj !*!");
    printf("\n\t\t\t  !*!  Mahfuz Idrishi     !*!     Shivangini Singh    !*!  GGP Varanasi                !*!");
    printf("\n\t\t\t  !*!                     !*!     Anjali Singh        !*!  Prasad Polytechnic Jaunpur  !*!");
    printf("\n\t\t\t  !*!                     !*!     Mahfuz Idrishi      !*!  Prasad Polytechnic Jaunpur  !*!");
    printf("\n\t\t\t  !*!                     !*!     Vinit Kumar Yadav   !*!  Prasad Polytechnic Jaunpur  !*!");
    printf("\n\n\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");

				
				break;
		case 0:
			exit(0);
		case 99:
		  goto start;
		 default:
		 printf("\n********** %s ***********\n",note); 	
	 } 
}
	}
}while(option!=11);
}
//This call when id password wrong
else
	{
		printf("\n\n\t\t\t\t\t\t\t \033[1;31mInvalid userid or password.\033[0m\n");
		printf("\n\t\t\t\t\t\t\t------------------------------");
		goto login;
	}
}
