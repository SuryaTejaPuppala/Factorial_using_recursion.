//Factorial of number using recursion
#include<stdio.h>

void main()
{
	int num , fact;
	printf("Enter any positive number:");
	scanf("%d",&num);
	fact=Factorial(num);
	printf("The Factorial of %d is %d",num,fact);
}

int Factorial(int num)
{
	if(num<=1)
	return num;
	else
	return num*Factorial(num-1);
}
