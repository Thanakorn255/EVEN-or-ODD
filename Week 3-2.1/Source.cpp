#include<stdio.h>
int main()
{
	int a;
	int c = 2;
	printf("Number is : ");
	scanf_s("%d", &a);

	if (a % c == 0)
	{
		printf("Even");
	}
	else if (a % c != 0)
	{
		printf("Odd");
	}
}