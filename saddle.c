#include<stdio.h>


int main()
{
int m,n,i,j,sm,p,large,f=1;

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
  printf("Element in the matrices  are : \n");
  for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
{
 printf("\t %d",a[i][j]);
}
printf("\n");
}


  for(i=0;i<m;i++) 
{
p=0;
sm=a[i][0];
for(j=0;j<n;j++)
{
if(sm > a[i][j])
{
sm=a[i][j];
p=j;

}

}


large=0;
for(j=0;j<n;j++)
{
if(large<a[j][p])
{
large=a[j][p];

}

}
if(sm=large)
{
printf("\n Value of saddel point of matrix is : %d \n",sm);
f=0;

}
}
if(f>0)

    printf("\n No saddle point...\n");
    return 0;
}

