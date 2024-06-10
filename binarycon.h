/* WAP to create header file for Binary Conversion */

//UDF for binary to decimal conversion
int binarytodecimal(long long num)
{
	 int rem, decimal = 0, power = 1;
    while (num > 0)
    {
        rem = num % 10;
        decimal = decimal + (rem * power);
        power = power * 2;
        num = num / 10;
    }
    return decimal;
}

//UDF for binary to octal conversion
int binarytooctal(int num)
{
	int result=0,rem,octal,i=1;
    octal = binarytodecimal(num);          //call binary to decimal conversion UDF
	while(octal!=0)
	{
	rem=octal%8;
	result=result+(rem*i);
	octal/=8;
	i*=10;
}
return result;
}

//UDF for binary to hexadecimal conversion
int binarytohexa(int num)
{
	int result=0,rem,octal,i=1;
    octal = binarytodecimal(num);    //call binary to decimal conversion UDF
	while(octal!=0)
	{
	rem=octal%16;
	result=result+(rem*i);
	octal/=16;
	i*=10;
}
return result;
}
