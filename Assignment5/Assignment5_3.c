#include<stdio.h>
int NonFact(int iNo)
{
	int i;
	for(i=1;i<iNo;i++)
	if(iNo%i!=0)
	printf("%d\t",i);
}
int main()
{
	int iValue=0;
	printf("Enter a number");
	scanf("%d",&iValue);
	NonFact(iValue);
	return 0;
}
