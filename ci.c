#include<stdio.h>
#include<math.h>
int main()
{

float ci,p,r,t,x;
printf("Enter the Principal Amount :");
scanf("%f",&p);
printf("Enter the rate :");
scanf("%f",&r);
printf("Enter time in year : ");
scanf("%f",&t);
x=pow((1 + 0.01*r),t);
ci=x*p;
printf("The Amount after time is : %f",ci );

}


