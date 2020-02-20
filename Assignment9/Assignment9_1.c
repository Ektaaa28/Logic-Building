#include<stdio.h>
void Display(int iNo)
{
	int i;
	for(i=1;i<=iNo;i++)
	{
		printf("*\t");
		
	}
	for(i=1;i<=iNo;i++)
	{
		printf("#\t");
		
	}
}
int main()
{
	int iValue=0;
	printf("Enter number");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}

