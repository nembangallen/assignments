#include<stdio.h>
void main()
{
	int arr[10];
	int i, max, min;


	printf("Enter 10 elements in the array: ");
	for (i = 0; i <10 ; i++)
	{
		scanf("%d",&arr[i]);
	}

	/* Suppose the first element as maximum and minimum */
	max=arr[0];
	min=arr[0];

	for (i = 1; i <10; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
	}

	printf("Maximum element = %d\n",max);
	printf("Minimum element = %d\n",min);
}