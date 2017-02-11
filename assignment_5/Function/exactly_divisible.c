#include<stdio.h>
void noReturnAndNoArgument(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if (n%5 == 0 && n%11 == 0)
	{
		printf("%d is exactly divisible by 5 and 11.",n);
	}else{
		printf("%d is not exactly divisible by 5 and 11",n);
	}
}

void noReturnAndArgument(int n){
	if (n%5 == 0 && n%11 == 0)
	{
		printf("%d is exactly divisible by 11 and 5",n);
	}else{
		printf("%d is not exactly divisible by 11 and 5",n);
	}
}

int returnAndNoArgument(){
	int n, five, eleven;
	printf("Enter a number: ");
	scanf("%d",&n);
	five = n%5;
	eleven = n%11;
	return five,eleven;
}

int returnAndArgument(int a){
	five = n%5;
	eleven = n%11;
	return five,eleven;
}
void main()
{
	int n,choice;
	printf("Select Anyone Options\n1.No return and no argument.\n2.No return and argument.\n3.Retrun with no argument.\n4.Return with argument.");
	printf("Select Anyone Options[1-4]:\n");
	scanf("%d",&choice);

	switch(choice){
		case 1:
		noReturnAndNoArgument();
		break;

		case 2:
		printf("Enter a number: ");
		scanf('%d',&n);
		noReturnAndArgument(n);
		break;

		case 3:
		if (five == 0 && eleven == 0)
		{
			printf("%d is exactly divisible by 5 and 11: ",&n);
		}else{
			printf("%d is not exactly divisible by 5 and 11: ",&n);
		}
		break;

		// case 4:
		// printf("Enter a number: ");
		// scanf("%d",&n);
		// if (/* condition */)
		// {
		// 	/* code */
		// }


	}

}