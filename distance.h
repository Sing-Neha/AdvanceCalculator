//header file for distance calculation
void  km_to_meter() 
{
 	float Meter,KM;
	printf("\n\tEnter Numbers in KM: ");
    scanf("%f", &KM);
	Meter = KM*1000;
    printf("\tKM to Meter convert: %.3f\n",Meter);
}
void  meter_to_km() 
{
	float Meter,KM;
	printf("\n\t Enter Numbers in Meter: ");
    scanf("%f", &Meter);
	KM = Meter/1000;
    printf("\tMeter to KM convert: %.3f\n",KM);
}
void cm_to_meter() 
{
 	float Meter,CM;
	printf("\n\tEnter Numbers in CentiMeter: ");
    scanf("%f", &CM);
	Meter = CM/100;
    printf("\tCM to Meter convert: %.3f\n",Meter);
}
void  meter_to_cm() 
{
	float Meter,CM;
	printf("\n\tEnter Numbers in Meter: ");
    scanf("%f", &Meter);
	CM = Meter*100;
    printf("\tMeter to CM convert: %.3f\n",CM);
}
void  dm_to_meter() 
{
 	float Meter,DM;
	printf("\n\tEnter Numbers in Decimeter: ");
    scanf("%f", &DM);
	Meter = DM/10;
    printf("\tDM to Meter convert: %.3f\n",Meter);
}
void  meter_to_dm() 
{
	float Meter,DM;
	printf("\n\t Enter Numbers in Meter: ");
    scanf("%f", &Meter);
	DM = Meter*10;
    printf("\tMeter to DM convert: %.3f\n",DM);
}
void  mm_to_meter() 
{
 	float Meter,MM;
	printf("\n\tEnter Numbers in MM: ");
    scanf("%f", &MM);
	Meter = MM/1000;
    printf("\tMM to Meter convert: %.6f\n",Meter);
}
void  meter_to_mm() 
{
	float Meter,MM;
	printf("\n\t Enter Numbers in Meter: ");
    scanf("%f", &Meter);
	MM = Meter*1000;
    printf("\tMeter to MM convert: %.6f\n",MM);
}
void micro_m_to_meter() 
{
 	float Meter,MicroM;
	printf("\n\tEnter Numbers in Micro_m: ");
    scanf("%f", &MicroM);
	Meter = MicroM/1000000;
    printf("\tMicro Meter to Meter convert: %.10f\n",Meter);
}
void  meter_to_micro_m() 
{
	float Meter,MicroM;
	printf("\n\t Enter Numbers in  Meter: ");
    scanf("%f", &Meter);
	MicroM = Meter*1000000;
    printf("\tMeter to Micro Meter convert: %.10f\n",MicroM);
}
void nano_m_to_meter() 
{
 	float Meter,NanoM;
	printf("\n\tEnter Numbers in  naino_m: ");
    scanf("%f", &NanoM);
	Meter = NanoM/1000000000;
    printf("\tNano Meter to Meter convert: %.12f\n",Meter);
}
void  meter_to_nano_m() 
{
	float Meter,NanoM;
	printf("\n\t Enter Numbers in Meter: ");
    scanf("%f", &Meter);
	NanoM = Meter*1000000000;
    printf("\tMeter to Nano Meter convert: %.12f\n",NanoM);
}
void pico_m_to_meter() 
{
 	float Meter,PicoM;
	printf("\n\tEnter Numbers in  Pico_Meter: ");
    scanf("%f", &PicoM);
	Meter = PicoM/1000000000000;
    printf("\tPico Meter to Meter convert: %.15f\n",Meter);
}
void  meter_to_pico_m() 
{
	float Meter,PicoM;
	printf("\n\t Enter Numbers in Meter: ");
    scanf("%f", &Meter);
	PicoM = Meter*1000000000000;
    printf("\tMeter to Pico Meter convert: %.15f\n",PicoM);
}
