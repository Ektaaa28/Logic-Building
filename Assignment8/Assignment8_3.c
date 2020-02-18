#include<stdio.h>
int Factorial(int iNo)
{
	int i,Ans=1;
	for(i=1;i<=iNo;i++)
	Ans=Ans*i;
	return Ans;
}
int main()
{
	int iValue=0,iRet=0;
	printf("Enter number");
	scanf("%d",&iValue);
	iRet=Factorial(iValue);
	printf("Factorial of number is %d",iRet);
	return 0;
} 
