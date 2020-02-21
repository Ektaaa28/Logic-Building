#include<stdio.h>
float FhtoCs(float fTemp)
{
	float celcius;
	celcius=(fTemp-32)*5/9;
	return celcius;
}
int main()
{
	float fValue=0.0;
	float dRet=0.0;
	printf("Enter temprature in farenheit");
	scanf("%f",&fValue);
	dRet=FhtoCs(fValue);
	printf("Celcius=%f",dRet);
	return 0;
}
