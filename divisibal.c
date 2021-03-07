#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
    if(x%5==0 && x%11==0)
    {
        printf("The number is divisival by 5 and 11");
    }
    else
    {
        printf("This no is not Divisival by 5 and 11");
    }

}