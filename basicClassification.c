#include <stdio.h>
#include "NumClass.h"
#define true 1
#define false 0

int isPrime(int a)
{
    if(a==0)
    {
        return 0;
    }
    if(a==1)
    {
        return true;
    }
    for(int i = 2 ;i < a;i++)
    {
        if(a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int atzeret(int a)
{
    int sum=1;
    if(a==1 || a==0)
    {
        return 1;
    }
    else
    {
        for(int i =1; i <= a;i++)
        {
            sum*=i;
        }
    }
    return sum;
} 
int isStrong(int a)
{
    if(a==0)
    {
        return false;
    }
    int save=a;
    int sum=0;
    while(a != 0)
    {
        int temp = a % 10;
        sum+=atzeret(temp);
        a=a/10;
    }
    if(save==sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}