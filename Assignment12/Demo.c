#include<stdio.h>

int mod(int NO) { return NO % 10; }

int div(int NO) { return NO / 10; }

int main(int argc, char const *argv[])
{
	int NO, rem, flag = 0;
	printf("\nEnter NO : ");
	scanf("%d", &NO);

	while(NO != 0)
	{
		rem = mod(NO);
		NO = div(NO);
		if(rem == 0)
		{
			flag = 1;
		}
	}

	if(flag == 1) printf("\n Zero");
	else printf("\nNot Zero");
}