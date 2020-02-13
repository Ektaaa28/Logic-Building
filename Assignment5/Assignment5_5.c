#include<stdio.h>
int FactDiff(int iNo)
{
	int i,fact=0,nonfact=0,diff=0;
	for(i=1;i<iNo;i++)
	if(iNo%i==0)
	fact=fact+i;
	{
		for(i=1;i<iNo;i++)
		if(iNo%i!=0)
		nonfact=nonfact+i;
		{
			diff=fact-nonfact;
			return diff;
		}
	}
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter a number");
	scanf("%d",&iValue);
	iRet=FactDiff(iValue);
	printf("%d",iRet);
	return 0;

}
