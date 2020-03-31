#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkZero(int iNo)
{
	int rem,flag=0;
	while(iNo!=0)
	{
		rem=iNo%10;
		iNo=iNo/10;
		if(rem==0)
		{
			flag=1;
		}
	}
	if(flag==1)
		return TRUE;
	else
		return FALSE;
}
int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	printf("Enter number : ");
	scanf("%d",&iValue);
	bRet=ChkZero(iValue);
	if(bRet==TRUE)
	{
		printf("\nIt contains zero\n");
	}
	else
	{
		printf("\nThere is no zero\n");
	}
	return 0;
}

