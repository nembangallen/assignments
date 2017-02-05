#include<stdio.h>
#define MAX_SIZE 1000
void main(){
	int nums[MAX_SIZE];
	int i,n,j,k;

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

	printf("\nArray with Unique list  : ");
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n;) {
			if (nums[j] == nums[i]) {
				for (k = j; k < n; k++) {
					nums[k] = nums[k + 1];
				}
				n--;
			} else
			j++;
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d ", nums[i]);
	}

	printf("\n");
}