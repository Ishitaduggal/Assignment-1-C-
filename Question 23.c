/* C program to reverse a Number Using FOR Loop */
#include <stdio.h>
int main()
{
    int i, n, r, f=0;
/* Using while loop: */
    printf("Enter a number to reverse: ");
    scanf("%d", &n);

    for(i=n; r= n%10; n=n/10)
    {
       f = f*10 + r;
    }
    printf("The reverse of %d", n);
    printf("is: %d", f);
    return 0;
}

