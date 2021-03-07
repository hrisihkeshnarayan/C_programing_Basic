#include<stdio.h>


int main()
{
int m,n,i,j;

printf("Enter the Number of Rows :\n");
scanf("%d",&m);
printf("Enter the Number of column: \n");
scanf("%d",&n);
int a[m][n];
printf("Enter the element in matrices : \n");

  for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
{
  scanf("%d",&a[i][j]);

}

}
  printf("Element in the array are : \n");
  for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
{
 printf("\t %d",a[i][j]);
}
printf("\n");
}
printf("The Transpose of the matrices is : \n");

for(j=0;j<n;j++)
{
for(i=0;i<m;i++)
{

    printf("\t%d",a[i][j]);
}
printf("\n");
}

}



