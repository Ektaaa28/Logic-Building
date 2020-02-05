#include<stdio.h>
int MultFact(int iNo)
{
	int i,mult=1;
	for(i=1;i<iNo;i++)
	if(iNo%i==0)
	mult=mult*i;
	return mult;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter a number");
	scanf("%d",&iValue);
	iRet=MultFact(iValue);
	printf("%d",iRet);
	return 0;
}
