#include<stdio.h>
int Multiply(int iNo1,int iNo2,int iNo3)
{
	int Ans;
	Ans=iNo1*iNo2*iNo3;
	return Ans;
}
int main()
{
	int iValue1=0,iValue2=0,iValue3=0,iRet=0;
	printf("Please enter three numbers");
	scanf("%d%d%d",&iValue1,&iValue2,&iValue3);
	iRet=Multiply(iValue1,iValue2,iValue3);
	printf("%d",iRet);
	return 0;
}
