#include<stdio.h>
void FactRev(int iNo)
{
	int i;
	for(i=iNo;i>=1;i--)
	if(iNo%i==0)	
	printf("%d\t",i);
}
int main()
{
	int iValue=0;
	printf("Enter number");
	scanf("%d",&iValue);
	FactRev(iValue);
	return 0;
}

