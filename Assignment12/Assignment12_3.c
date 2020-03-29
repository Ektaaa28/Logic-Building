#include<stdio.h>
int CountTwo(int iNo)
{
	int rem,cnt;
	cnt=0;
	while(iNo>0)
	{
		rem=iNo%10;
		if(rem==2)
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
	bRet=CountTwo(iValue);
	printf("%d",bRet);
	return 0;
}

