/* Palindrome Program in C Using While Loop */
#include<stdio.h>
int main()
{
    int n, r, s=0, n1;

    printf("Enter number: ");
    scanf("%d", &n);
    n1 = n;

    while (n>0)
    {
        r=n%10;
        n=n/10;
        s=s*10 + r;
    }
    printf("The reverse is: %d", s);

    if (n1==s)
    {
        printf("\nYes, the given number is a palindrome.");
    }
    else
    {
        printf("\nNo, the given number is not a palindrome.");
    }
    return 0;
}
