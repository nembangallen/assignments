#include <stdio.h>
void fun(int num)
{
	printf("\nElement : %d",num);
}

void main()
{
	int arr[10],i;
	
	printf("\nEnter the array elements : ");
	for(i=0;i< 10;i++)
		scanf("%d",&arr[i]);

	for(i=0;i< 10;i++)
		fun(arr[i]);
	printf("\n");
}