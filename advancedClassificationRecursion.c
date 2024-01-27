#include <stdio.h>
#include "NumClass.h"
#define true 1
#define false 0

int revers(int a,int temp)
{
	if(a==0)
	{
		return temp;
	}
	temp=(temp*10) + (a%10);
	return revers(a/10,temp);
}
int isPalindrome(int a)
{
	int temp =revers(a,0);
	if(a==temp)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int power(int a,int b){//a^b
	int result=1;
	for (int  i = 0; i < b; i++)
	{
		result=result*a;
	}
	return result;
	
}


int help(int a,int sum,int count)
{
	if(a != 0)
	{
		sum=power((a%10), count);

		sum+=help(a/10,sum,count);
	}
	if(a==0)
	{
		return 0;
	}
	else
	{
		return sum;
	}
}
int isArmstrong(int a)
{
	int count =0;
    int temp =a;
	while (temp != 0)
	{
        temp/=10;
        count++;
	}
	int sum=help(a,0,count);
	if(a==sum)
	{
		return true;
	}
	else
	{
		return false;
	}
}