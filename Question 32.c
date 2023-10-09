/*  C program to count the Number of Digits of an Integer Using the While Loop  */
#include<stdio.h>
int main()
{
    int n,c=0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n>0)
    {
        c++;
        n=n/10;
    }
    printf("The number of digits is %d", c);

    return 0;

}
