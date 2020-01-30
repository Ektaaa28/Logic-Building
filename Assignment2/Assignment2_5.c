#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkEven(int iNo)
{
	if(iNo%2==0)
		printf("%d is Even number",iNo);
	else
		printf("%d is Odd number",iNo);
}
int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	printf("Enter number");
	scanf("%d",&iValue);
	bRet=ChkEven(iValue);
	return 0;
}
