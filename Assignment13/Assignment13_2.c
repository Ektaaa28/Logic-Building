#include<stdio.h>
int CountOdd(int iNo)
{
	int rem,cnt;
	cnt=0;
	while(iNo>0)
	{
		rem=iNo%10;
		if(rem%2!=0)
		cnt++;
		iNo=iNo/10;
	}
	return cnt;
}
int main()
{
	int iValue=0;
	int bRet=0;
	printf("Enter number");
	scanf("%d",&iValue);
	bRet=CountOdd(iValue);
	printf("%d",bRet);
	return 0;
}

