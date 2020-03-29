#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkZero(int iNo)
{
	int rem;
	rem=iNo%10;
	if(rem==0)
	
	{
		return TRUE;
		iNo=iNo/10;
	}
	else
	{
		return FALSE;
	}

}
int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	printf("Enter number");
	scanf("%d",&iValue);
	bRet=ChkZero(iValue);
	if(bRet==TRUE)
	{
		printf("It contains zero");
	}
	else
	{
		printf("There is no zero");
	}
	return 0;
}
