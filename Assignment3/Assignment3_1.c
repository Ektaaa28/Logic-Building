#include<stdio.h>
int PrintEven(int iNo)
{
	int cnt=1,num=1;
	while(cnt<=iNo)
	{
		if(num%2==0)
		{
			printf("%d\t",num);
			cnt++;
		}
		num++;
	}
	return 0;
}	
int main()
{
	int iValue,cnt=1,iNo=0;
	printf("Enter number");
	scanf("%d",&iValue);
	PrintEven(iValue);
	return 0;
}
