#include <stdio.h>
void prime(int i,int j)
{
	for (i = 1; i < 500; i++)
	{	
		for (j = 2; j < i; j++)
		{
			if (i%j==0)
			{
				break; 
			}
		}

		if (i==j)
		{
			printf("%d\t",i);
		}
	}

	printf("\n");
}

void main()
{	
	int i,j;
	prime(i,j);
}
