#include<stdio.h>
float percentage(float iNo1,float iNo2)
{
	float percentage;
	percentage=iNo2*100/iNo1;
	return percentage;
}
int main()
{
	float iValue1=0,iValue2=0;
	float fRet=0.0;
	printf("Please enter total marks");
	scanf("%f",&iValue1);
	printf("Please enter obtained marks");
	scanf("%f",&iValue2);
	fRet=percentage(iValue1,iValue2);
	printf("%f",fRet);
	return 0;
}
