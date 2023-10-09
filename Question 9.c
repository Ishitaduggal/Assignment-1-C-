/* 9. C program to check if a number Is Positive or Negative */
#include <stdio.h>
int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if (n>0)
    {
        printf("The given number is positive.");
    }

    else if (n<0)
    {
        printf("The given number is negative.");
    }

    else
    {
        printf("The given value is 0.");
    }
    return 0;
}
