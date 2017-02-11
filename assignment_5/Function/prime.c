#include <stdio.h>
void prime(int n, int i)
{
	for (i = 2; i < n; i++)
	{
		if (n%i==0)
		{
			break;
		}
	}

	if (i==n)
	{
		printf("%d is a prime number\n",n);
	}
	else
	{
		printf("%d is not a prime number\n",n);
	}
}
void main()
{
	int n,i;

	printf("Enter a number: ");
	scanf("%d",&n);
	prime(n,i);

}