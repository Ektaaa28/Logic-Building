#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkVowel(char cValue)
{
	if(cValue=='a'||cValue=='e'||cValue=='i'||cValue=='o'||cValue=='u')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	char cValue;
	BOOL bRet=FALSE;
	printf("Enter character\n");
	scanf("%c",&cValue);
	bRet=ChkVowel(cValue);
	if(bRet==TRUE)
	{
		printf("It is vowel");
	}
	else
	{
		printf("It is not vowel");
	}
	return 0;
}
