// Question: Write a program to determine whether a number is divisible by 97 or not.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if (n % 97 == 0)
    {
        printf("The number is divisible 97\n");
    }
    else
    {
        printf("The number isn't divisible by 97\n");
    }
    return 0;
}