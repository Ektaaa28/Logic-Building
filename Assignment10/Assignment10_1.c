#include<stdio.h>
double CircleArea(float fRadius)
{
	float area;
	area=3.14*fRadius*fRadius;
	return area;
}
int main()
{
	float fValue=0.0;
	double dRet=0.0;
	printf("Enter radius");
	scanf("%f",&fValue);
	dRet=CircleArea(fValue);
	printf("Area=%f",dRet);
	return 0;
}
