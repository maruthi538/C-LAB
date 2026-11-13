#include<stdio.h>

int main(void)
{
    int a,b,c;
    
    printf("enter three integers:");
    scanf("%d %d %d",&a,&b,&c);

    if(a == b && b == c)
    {
        printf("all three numbers are equal.\n");
    }
    else if(a==b)
    {
        if(a>c)
            printf("%d and %d are equal and are the largest.\n,a,b");
        else
            printf("%d is the largest; the frist two numbers are equal.\n",c);
    }
    else if(a==c)
    {
        if(a>b)
        printf("%d and%d are equal and are the largest.\n",a,c);
        else if(b==c)
    
        if(b>a)
            printf("%d and%d are equal and are the largest.\n",b,c);
        else
            printf("%d is the lasrgest; the second and third numbers are equal.\n",a);
    }
    else
    {
        if(a>b)
        {
        if(a>c)
            printf("%d is the largest.\n",a);
        else
            printf("%d is the largset.\n",c);
    }
    else
    {
        if(b>c)
        printf("%d is the largest.\n",b);
    else
        printf("%d is the largest.\n",c);
    }
    }

    return 0;
}