#include <stdio.h>
#include "NumClass.h"

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
		return 1;
	}
	else
	{
		return 0;
	}
}
int power(int a,int b){//a^b
	if (b==0){
		return 1;
	}
	while (b>1)
	{
		 a=a*a;
		 --b;
	}
	return a;
	
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
		return 1;
	}
	else
	{
		return 0;
	}
}