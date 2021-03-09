#include<stdio.h>
int main()
{
int d,y,m;
printf("Enter the number of days : \n");
scanf("%d",&d);
y=d/365;
d=d%365;
m=d/30;
d=d%30;
printf("The number of year is : %d ",y);
printf("The number of month is : %d ",m);
printf("The number of days is : %d ",d);
}