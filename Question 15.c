/* C program to Find the Greatest Among Three Numbers */
#include <stdio.h>
int main()
{
    int n1, n2, n3;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    printf("Enter the third number: ");
    scanf("%d", &n3);

    if (n1>n2)
    {
        if(n1>n3)
        {
            printf("The greatest number is: %d", n1);
        }
        else
        {
            printf("The greatest number is: %d", n3);
        }
    }
    else
    {
        if (n2>n3)
        {
            printf("The greatest number is: %d", n2);
        }
        else{
            printf("The greatest number is: %d", n3 );
        }

    }
    return 0;
}
