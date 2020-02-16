#include<stdio.h>
void Pattern(int iNo)
{
	int i;
	while(iNo>0)
	{
		printf("$\t*\t");
		iNo--;
	}
}
int main()
{
	int iValue=0;
	printf("Enter number");
	scanf("%d",&iValue);
	Pattern(iValue);
	return 0;
}
