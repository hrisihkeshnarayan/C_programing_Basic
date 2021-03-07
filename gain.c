#include<stdio.h>
int main()
{
    int cp,sp;
    printf("Enter the cost price and selling price :");
    scanf("%d%d",&cp,&sp);
    if(sp>cp)
    {
    printf("THE SELLER GET PROFIT OF : %d",sp-cp);
    }
    else if(cp>sp)
    {
        printf("THE SELLER GET LOSS OF : %d",cp-sp);

    }
    else
    {
        printf("The is get no profit");
    }
    
}