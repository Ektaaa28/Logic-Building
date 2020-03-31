#include<stdio.h>
int MultDigits(int iNo)
{
	int rem,mult=1;
	while(iNo!=0)
	{
		rem=iNo%10;
		mult=mult*rem;
		iNo=iNo/10;
	}
	return mult;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number");
	scanf("%d",&iValue);
	iRet=MultDigits(iValue);
	printf("%d",iRet);
	return 0;
}
