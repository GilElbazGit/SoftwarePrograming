#include <stdio.h>
#include "NumClass.h"
#define true 1
#define false 0

int revers(int a)
{  
    int temp =0;
    while(a != 0)
    {
        temp*=10;
        temp+=a%10;
		a=a/10;
    }
    return temp;
}
int isPalindrome(int a)
{
    int temp=revers(a);
    if(a==temp)
	{
		return true;
	}
	else
	{
		return false;
	}
}



int isArmstrong(int a)
{
    int count =0;
    int temp =a;
	int sum=0;
	while (temp != 0)
	{
        temp/=10;
        count++;
	}
    temp=a;
    while (temp!=0)
    {
		int dig=temp%10;
		temp/=10;
		int ans=1;
		for(int i=1;i<=count;i++){
			ans=ans*dig;
		}
        sum+=ans;
    }
	if(a==sum)
	{
		return true;
	}
	else
	{
		return false;
	}
}