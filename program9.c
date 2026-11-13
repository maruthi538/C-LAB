#include<stdio.h>

int main(void)
{
    int number, original,temp,didgit;
    int digits=0,i,power,sum=0;

    printf("enter a positive integer:");
    scanf("%d",&number);

    if(number <=0)
    {
        printf("please enter a positive integer .\n");
        return 0;
    }

    original=number;
    temp=number;

    while (temp>0)
    {
        digits++;
        temp=temp/10;
    }

    temp=number;

    while (temp>0)
    {
        digits = temp%10;
        power=1;

        for(i=1; i <= digits; i++)
            power=power*digits;

            sum=sum+power;
            temp=temp/10;
    }

    if (sum==original)
        printf("%d is an armostrong number.\n", original);
    else
        printf("%d is not an aromstrong number.\n", original);
    
    return 0;
}