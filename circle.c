#include<stdio.h>

int main()
{

int r,d;
float a,p;
printf("Enter thr radius of circle : \n");
scanf("%d",&r);
a=3.141*3.141*r*r;
p=3.141*2*r;
d=2*r;
printf("The area is %f\n The Perimeter is %f\n The Diamerter is %d\n",a,p,d);


}