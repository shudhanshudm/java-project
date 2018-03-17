#include<stdio.h>
void main()
{
int v,i,j=0,a[100][100],k;
printf("enter no. of variables\n");
scanf("%d",&v);
for(i=0;i<v;i++)
{
printf("enter the coefficients\n");
for(k=0;k<v;k++)
{
    scanf("%d",&a[j][k]);
}
printf("enter the constant\n");
scanf("%d",&a[j][k]);
j=j+1;
}
printf("augmented matrix is\n");
for(j=0;j<v;j++)
{
    for(k=0;k<v+1;k++)
    {
      printf(" %d",a[j][k]);

    }
    printf("\n");
}
}

