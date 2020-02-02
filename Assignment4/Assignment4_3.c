#include<stdio.h>
int SchoolFees(int iStandard)
{
	if(iStandard==1)
	{
		printf("Fees=8900");
	}
	else
	if(iStandard==2)
	{
		printf("Fees=12790");
	}
	else
	if(iStandard==3)
	{
		printf("Fees=21000");
	}
	else
	if(iStandard==4)
	{
		printf("Fees=23450");
	}
	else
		printf("Wrong input");
}
int main()
{
	int iStd;
	printf("Enter Standard:");
	scanf("%d",&iStd);
	SchoolFees(iStd);
	return 0;
}
