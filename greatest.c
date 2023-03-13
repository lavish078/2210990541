#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("\nEnter Principal,Rate,Time : ");
    scanf("%f%f%f",&p,&r,&t);
    si=p*r*t/100;
    printf("\nSimple Interest : %.2f",si);
    return 0;
}