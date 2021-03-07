#include<stdio.h>
int main()
{
int x,y,area=0,p=0;
printf("Enter the length of rectanglr :");
scanf("%d",&x);
printf("Enter the breath of rectanglr :");
scanf("%d",&y);
area=x*y;
p=2*(x+y);
printf("The area of Rectangle is : %d \n The perimeter of Rectangle is : %d",area,p);
}