/* C Program to Print the Multiplication Table of N */
#include<stdio.h>
int main()
{
    int N, i, x;

    printf("Enter number: ");
    scanf("%d", &N);

    for (i=1; i<=15; i++)
    {
        printf("%d*%d=%d\n",i,N,x=i*N);
    }
    return 0;
}
