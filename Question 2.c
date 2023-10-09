/* 2. Print the ASCII Value of the Character */
#include <stdio.h>
int main()
{
    char inp;

    printf("Enter  character: ");
    scanf("%c",&inp);

    printf("The ASCII value of %c", inp);
    printf(" is: %d", inp);

    return 0;
}
