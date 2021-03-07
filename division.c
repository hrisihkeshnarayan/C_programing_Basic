#include<stdio.h>
int main()
{
int  x,y,q,r;
printf("Enter First Number :");
scanf("%d",&x);
printf("Enter second number :");
scanf("%d",&y);
q=x/y;
r=x%y;
printf("The quotient of the number is : %d \n ",q);
printf("The reminder of the number is : %d",r);


}