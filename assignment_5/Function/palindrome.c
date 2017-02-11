#include <stdio.h>
void palindrome()
{
	int num, reverse_num, remainder, temp;
	printf("Enter any number: ");
	scanf("%d",&num);

	temp=num;
	while(temp!=0)
	{
		remainder=temp%10;
		reverse_num=reverse_num*10+remainder;
		temp/=10;
	}

	if (reverse_num==num)
	{
		printf("%d is a palindrome number.",num);
	}
	else
	{
		printf("%d is a palindrome number.",num);
	}
}
void main()
{
	palindrome();
}