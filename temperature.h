void celsius_to_fahrenheit()
{
	float fahrenheit,celsius;
	printf("\n\tEnter temperature in Celsius: ");
    scanf("%f", &celsius);
	fahrenheit = (celsius * 9 / 5) + 32;
    printf("\tTemperature in celsius_to_fahrenheit: %.3f\n",fahrenheit);
}
void fahrenheit_to_celsius()
{
	float celsius,fahrenheit;
	printf("\n\tEnter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
	celsius=((fahrenheit-32)*5)/9;
	printf("\tTemperature in fahrenheit_to_celsius: %.3f\n", celsius);
}

void Celsius_to_Kelvin()
{
	float Kelvin,celsius;
	printf("\n\tEnter temperature in Celsius: ");
    scanf("%f", &celsius);
	Kelvin=celsius+273.15;
	printf("\tTemperature in Celsius_to_Kelvin: %.3f\n", Kelvin);
}

void Kelvin_to_Celcius()
{
	float celsius,Kelvin;
	printf("\n\tEnter temperature in Kelvin: ");
    scanf("%f", &Kelvin);
	celsius=Kelvin-273.15;
	printf("\tTemperature in Kelvin_to_celsius: %.3f\n", celsius);
}

void Fahrenheit_to_Kelvin()
{
	float Kelvin,fahrenheit;
	printf("\n\tEnter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
	Kelvin=273.15+((fahrenheit-32)*(5/9));
	printf("\tTemperature in fahrenheit_to_Kelvin: %.3f\n", Kelvin);
}

void Kelvin_to_Fahrenheit()
{
	float Fahrenheit,kelvin;
	printf("\n\tEnter temperature in kelvin: ");
    scanf("%f", &kelvin);
	Fahrenheit=((kelvin-273.15)*(9/5)) + 32;
	printf("\tTemperature in Kelvin_to_fahrenheit: %.3f\n", Fahrenheit);
}
