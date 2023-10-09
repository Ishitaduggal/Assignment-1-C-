/*  C program to Check if a Character Is a Vowel or Not Using If-Else */
#include <stdio.h>
int main()
{
    char n;

    printf("Enter a character: ");
    scanf("%c", &n);

    if (n=='a'||n=='A'||n=='e'||n=='E'||n=='i'||n=='I'||n=='o'||n=='O'||n=='u'||n=='U')
    {
        printf("The given character is a vowel. ");
    }
    else
    {
        printf("The given character is not a vowel");
    }
    return 0;
}
