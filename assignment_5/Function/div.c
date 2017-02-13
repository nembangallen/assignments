/*
* Program: To display all the divisors of the input number.
*/
#include <stdio.h>
void div()
{	
	/* local variables declaration */
	int n,i;

	/*
	* Read the the given number from user.
	*/
	printf("Enter the number: ");
	scanf("%d",&n);


	printf("The divisors of %d are: \n",n);
	/* for loop execution */
	for (i = 1; i <=n; i++)
	{
		if (n%i==0)
		{
			printf("%d\t",i);
		}
	}

	printf("\n");	
}
void main()
{	
	/* calling div function */
	div();
}
