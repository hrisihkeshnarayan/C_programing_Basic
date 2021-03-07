#include<stdio.h>
int main()
{
int a;
printf(" Enter a number :");
scanf("%d",&a);
if(a>0)

{
    printf("This is positive number ");
    
}
else if(a<0)
{
    printf(" this is negative number ",a);
}
else
{
    printf("%d is zero",a);
}

}