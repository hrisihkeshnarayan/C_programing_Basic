#include<stdio.h>
int main()
{
int x;
printf("Enter a number :");
scanf("%d",&x);
if(65<=x<=90)
{
printf("the char value is : %c",x);
}
else if (97<=x<=122)
{
printf("The char value is : %c",x);

}
else
{
    printf("Not a alphabate letter ");
}


}