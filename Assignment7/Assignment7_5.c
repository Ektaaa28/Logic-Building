#include<stdio.h>
void MultipleDisplay(int iNo)
{
	int i=1,Mult;
	while(i<=5)
	{
		Mult=iNo*i;
		printf("%d\t",Mult);
		i++;
	}
}
int main()
{
	int iValue=0;
	printf("Enter number");
	scanf("%d",&iValue);
	MultipleDisplay(iValue);
	return 0;
}
