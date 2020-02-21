#include<stdio.h>
int KMtoMeter(int iNo)
{
	int Meter;
	Meter=iNo*1000;
	return Meter;
}
int main()
{
	int iValue=0,iRet=0;
	printf("Enter distance");
	scanf("%d",&iValue);
	iRet=KMtoMeter(iValue);
	printf("Meter=%d",iRet);
	return 0;
}
