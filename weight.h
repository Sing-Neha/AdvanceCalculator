//header file for weight convert
//convert kgb to pound
#include <stdio.h>
void pound( )
{
	float kilogram,p;
	printf("\tEnter kilogram: ");
	scanf("%f",&kilogram);
	p=kilogram*2.20462;
	printf("\tResult in Pound : %f\n",p);
}
void gram()
{
	float kilogram,gram;
	printf("\tEnter kilogram: ");
	scanf("%f",&kilogram);
	gram=kilogram*1000;
	printf("\tResult in Gram : %f\n",gram);
}
float ton()
{
	float kilogram,ton;
	printf("\tEnter kilogram: ");
	scanf("%f",&kilogram);
	ton =kilogram*0.0010;
	printf("\tResult in Ton : %f\n",ton);
}
float miligram()
{
	float kilogram,miligram;
	printf("\tEnter kilogram: ");
	scanf("%f",&kilogram);
	 miligram = kilogram * 1000000;
	printf("\tResult in Miligram : %f\n",miligram);
}
float microgram()
{
	float kilogram,microgram;
	printf("\tEnter kilogram: ");
	scanf("%f",&kilogram);
	 microgram = kilogram * 1000000000;
	printf("\tResult in Microgram : %f\n",microgram);
}
