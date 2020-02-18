#include<stdio.h>
int Table(int iNo)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",iNo,i,iNo*i);
	}
}
int main()
{
	int iValue=0;
	printf("Enter number");
	scanf("%d",&iValue);
	Table(iValue);
	return 0;
}	
