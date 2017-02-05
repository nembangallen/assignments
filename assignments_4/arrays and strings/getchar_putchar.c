/*
* Program: To Read and Display the character using getchar and putchar function.
*/
#include<stdio.h>
void  main()
{
	char decision;
	printf("Enter your decision Y or N: ");
	decision = getchar();
	printf("Your decision is: ");
	putchar(decision);
	printf("\n");
}