#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
	printf("Enter your name:");
	gets(name);
	printf("Your name is:");
	puts(name);
    return 0;
}
