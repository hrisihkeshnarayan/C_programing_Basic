#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter fist Number :\n");
    scanf("%d",&a);
    printf("Enter second Number :\n");
    scanf("%d",&b);
    printf("Enter third Number :\n");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("%d is greater number",a );
    }
    else if(b>c && b>a)
    {
        printf("%d is greater number",b);
    }
    else (c>a && c>b);
    {
        printf("%d is greater number ",c);
    }

}