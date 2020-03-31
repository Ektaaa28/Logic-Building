#include<stdio.h>
int CountDiff(int iNo)
{
	int rem,Esum=0,Osum=0,diff;
	while(iNo!=0)
	{
		rem=iNo%10;
		if(rem%2==0)
		{
			Esum=Esum+rem;
		}
		else
		{
			Osum=Osum+rem;
		}
		iNo=iNo/10;
	}
	diff=Esum-Osum;
	return diff;		
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number");
	scanf("%d",&iValue);
	iRet=CountDiff(iValue);
	printf("%d",iRet);
	return 0;
}
