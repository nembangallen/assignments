#include <stdio.h>

int sum (int a);

int main()
{
    int a, result;

    printf("Enter the number: ");
    scanf("%d", &a);

    result = sum(a);
    printf("Sum of digits in %d is %d\n", a, result);
    return 0;
}


int sum (int a)
{
    if (a != 0)
    {
        return (a % 10 + sum (a / 10));
    }
    else
    {
       return 0;
   }

}