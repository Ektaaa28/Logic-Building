#include<stdio.h>
float IncomeTax(float fAmount)
{
	if(fAmount<500000)
	{
		printf("No Tax");
	}
	else
	if(fAmount<1000000 && fAmount>500000)
	{
		fAmount=fAmount*10/100;
		printf("Tax Amount=%f",fAmount);
	}
	else
	if(fAmount<2000000 && fAmount>1000000)
	{
		fAmount=fAmount*20/100;
		printf("Tax Amount=%f",fAmount);
	}
	else
	if(fAmount>2000000)
	{
		fAmount=fAmount*30/100;
		printf("Tax Amount=%f",fAmount);
	}
}
int main()
{
	float fincome;
	printf("Enter income:");
	scanf("%f",&fincome);
	IncomeTax(fincome);
	return 0;
}
