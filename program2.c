#include <stdio.h>

int main(void)
{
    double lenght,breadth,radius,base,height;
    const double PI=3.14159;

    printf("enter rectengle lenght and breadth:");
    scanf("%lf %lf",&lenght,&breadth);

    printf("renctangle area=%.2lf\n",lenght*breadth);
    printf("rectangle perimeter=%.2lf\n",2*(lenght+breadth));

    printf("enter cricle radius:");
    scanf("%lf",&radius);

    printf("criclr area=%.2lf\n",PI*radius*radius);
    printf("circle circumference=%.2lf\n",2*PI*radius);

    printf("enter traingle base and height:");
    scanf("%lf%lf",&base,&height);

    printf("triangle area=%.2lf\n",0.5*base*height);

    return 0;
}