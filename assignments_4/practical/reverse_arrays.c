#include<stdio.h>
#define MAX_SIZE 1000
void main(){
	int nums[MAX_SIZE];
	int i,n;

	printf("Enter the size of an array: ");
	scanf("%d",&n);
	printf("Enter %d elements in the array: ",n);
	for (i = 0; i <n; i++)
	{
		scanf("%d",&nums[i]);
	}

	printf("Elements in array are: ");
	for (i = 0; i <n; i++)
	{
		printf("%d",nums[i]);
	}
	printf("\n");
	printf("Reverse of the array: ");
	for (i = n-1; i >=0 ; i--)
	{
		printf("%d",nums[i]);
	}
	printf("\n");
}