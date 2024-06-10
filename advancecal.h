//header file for nCr and nPr and factorial

long factorial(double n)  //factorial 
{
	double result=1,i;
	for( i=1;i<=n;i++) //loop
	{
		result*=i;  //logic used to find factorial
	}
	return result;  //return of factorial
}
 int combination(int n,int r)  //combination
 {
 	int c;
 	c=factorial(n)/(factorial(r)*factorial(n-r));  //logic used to find combination
 	return c;    //return of combination
 }
 
 float permutation(int n,int r)  //premutation
 {
 	float p;
 	p=(float)factorial(n)/factorial(n-r);  //logic used to find premutation
 	return p;   //return of premutation
 }
