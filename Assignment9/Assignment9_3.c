#include<stdio.h>
int EvenFactorial(int iNo)
{
	int i,fact=1;
	for(i=iNo;i>=1;i--)
	
		if(i%2==0)
		fact=fact*i;
		return fact;
}
int main()
{
	int iValue=0,iRet=0;
	printf("Enter number");
	scanf("%d",&iValue);
	iRet=EvenFactorial(iValue);
	printf("Even factorial of number is %d",iRet);
	return 0;
}
