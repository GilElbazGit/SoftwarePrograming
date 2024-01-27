#include <stdio.h>
#include "NumClass.h"
#define true 1

int main()
{
    // printf("enter two numbers \n");
    int a;
    int b;
    while ((scanf ("%d%d" , &a , &b) != 2) || (a < 0) || (b < 0))
    {
        char temp;
        scanf ("%c" , &temp);
        printf ("ERROR! \n");
        printf("enter two positive numbers \n");
    }
    int max =a;
    int min=b;
    if(a<b)
    {
        max =b;
        min=a;
    }
    

    printf("The Armstrong numbers are:");
    for(int i = min; i <= max; i++)
    {
        if(isArmstrong(i)==true)
        {
            printf(" %d", i);
        }
    }
    printf("\n");

    printf("The Palindromes are:");
    for(int i = min; i <= max; i++)
    {
        if(isPalindrome(i)==true)
        {
            printf(" %d", i);
        }
    }
    printf("\n");

    printf("The Prime numbers are:");
    for(int i = min; i <= max; i++)
    {
        if(isPrime(i)==true)
        {
            printf(" %d", i);
        }
    }
    printf("\n");

    printf("The Strong numbers are:");
    for(int i = min; i <= max; i++)
    {
        if(isStrong(i)==true)
        {
            printf(" %d", i);
        }
    }
    printf("\n");

    return 0;
}