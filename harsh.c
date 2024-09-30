#include<stdio.h>
#include<conio.h>
int main()
{
	int month;
	printf("enter month number (1-12):");
	scanf("%d",&month);
	
	if(month == 1)
	{
		printf(" jan-31days");
	}
	
    else if(month == 2)
    {
    	printf("feb-28 or 29 days");
	}
	else if(month == 3)
	{
		printf("march-31 days");
	}
	else if(month == 4)
	{
		printf("april- 30days");
	}
	else if(month == 5)
	{
		printf("may- 31days");
	}
	else if(month == 6)
	{
		printf("june-30days");
	}
	else if(month == 7)
	{
		printf("july-31 days");
	}
	else if(month == 8)
	{
		printf("august - 31 days");
	}
	else if(month == 9)
	{
		printf("september - 30 days");
	}
	else if(month == 10)
	{
		printf("october - 31 days");
	}
	else if(month == 11)
	{
		printf("november - 30 days");
	}
	else if(month == 12)
	{
		printf("december  - 31 days");
	}
	else
	{
		printf("invalid input");
	}
	return 0;
}
