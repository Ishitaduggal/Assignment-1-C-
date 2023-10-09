/* C program to check Whether You Are Eligible for Voting or Not */
#include <stdio.h>
int main()
{
    int n;

    printf("Enter your age: ");
    scanf("%d", &n);

    if (n>=18)
    {
        printf("Yes, you are eligible to vote.");
    }

    else
    {
        printf("No, you are not eligible to vote.");
    }
    return 0;
}
