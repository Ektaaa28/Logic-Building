#include<stdio.h>
float CalculateBill(float fAmount)
{
	float fValue=0;
	if(fAmount<500)
	{
		printf("No discount");
	}
	else
	if(fAmount<1500 && fAmount>500)
	{
		fValue=fAmount*10/100;
		fAmount=fAmount-fValue;
		printf("Bill=%f",fAmount);
	}
	else
	if(fAmount>1500)
	{
		fValue=fAmount*15/100;
		fAmount=fAmount-fValue;
		printf("Bill=%f",fAmount);
	}
}
int main()
{
	float fbill;
	printf("Enter total bill:");
	scanf("%f",&fbill);
	CalculateBill(fbill);
	return 0;
}
