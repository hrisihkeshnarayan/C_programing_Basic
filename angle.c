#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter the first angle of triangle :");
scanf("%d",&x);
printf("Enter the second angle of triangle :");
scanf("%d",&y);
z= (180 - (x+y));
printf("The third angle of triangle is : %d",z);


}