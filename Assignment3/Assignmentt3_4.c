#include<stdio.h>
char DisplayConvert(char cValue)
{
	if(cValue>='a' && cValue<='z')
	{
		printf("%c",cValue-32);
	}
	else if(cValue>='A' && cValue<='Z')
	{
		printf("%c",cValue+32);
	}
}
int main()
{
	char cValue;
	printf("Enter character\n");
	scanf("%c",&cValue);
	DisplayConvert(cValue);
	return 0;
}
	
