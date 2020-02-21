#include<stdio.h>
double SquareMeter(int iValue)
{
	float sqmeter;
	sqmeter=iValue*0.0929;
	return sqmeter;
}
int main()
{
	int iValue=0;
	double dRet=0.0;
	printf("Enter area in square feet");
	scanf("%d",&iValue);
	dRet=SquareMeter(iValue);
	printf("SquareMeter=%f",dRet);
	return 0;
}
