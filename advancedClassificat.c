#include <stdio.h>
#include "NumClass.h"

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
		return 1;
	}
	else
	{
		return 0;
	}
}
int power (int a,int b){ //a^b
	if (b==0){
		return 1;
	}
	while (b>1){
		a=a*a;
		--b;
	}	
	return a;
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
        int ans=power((temp%10),count);
        sum+=ans;
		temp/=10;
    }
    
	if(a==sum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}