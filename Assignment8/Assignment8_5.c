#include<stdio.h>
int TableRev(int iNo)
{
	int i;
	for(i=10;i>=1;i--)
	{
		printf("%d*%d=%d\n",iNo,i,iNo*i);
	}
}
int main()
{
	int iValue=0;
	printf("Enter number");
	scanf("%d",&iValue);
	TableRev(iValue);
	return 0;
}	
