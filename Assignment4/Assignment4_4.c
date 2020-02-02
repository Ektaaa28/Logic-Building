#include<stdio.h>
int TouristBill(int iKilometer)
{
	if(iKilometer<100)
	{
		
		printf("Rent=%d",iKilometer*25);
	}
	else
	{
		printf("Rent=%d",iKilometer*15);
	}
}
int main()
{
	int iKm;
	printf("Enter Kilometers:");
	scanf("%d",&iKm);
	TouristBill(iKm);
	return 0;
}
