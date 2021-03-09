#include<stdio.h>
int main()
{
    char x;
    printf("Enter the any alphabate :");
    scanf("%c",&x);
    
    if(x>= 'A')
    {
        if(x<='Z')
        {
            printf("%c is upper case \n",x);
        }
        else if (x>='a')
        {
            if(x<='z')
            {
                printf("%c is lower case \n",x);
            }
            else
            {
                printf("%c is not a alphabate \n",x);
            }
            
        }
         else
            {
                printf("%c is not a alphabate \n",x);
            }
    }
     else
            {
                printf("%c is not a alphabate \n",x);
            }


}