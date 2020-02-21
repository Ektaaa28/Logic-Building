#include<stdio.h>
int FactorialDiff(int iNo)
{
	int i,efactorial=1,ofactorial=1,diff;
	for(i=iNo;i>=1;i--)
	if(i%2==0)
	efactorial=efactorial*i;
	{
		for(i=iNo;i>=1;i--)
		if(i%2!=0)
		ofactorial=ofactorial*i;
		{
			diff=efactorial-ofactorial;
			return diff;
		}
	}
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter a number");
	scanf("%d",&iValue);
	iRet=FactorialDiff(iValue);
	printf("Factorial difference is %d",iRet);
	return 0;

}
