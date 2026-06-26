// Ques. Multiplication matrix
 #include<stdio.h>
int main()
{
int a[10][10],b[10][10],p[10][10]={0},k,m,n,r,c; 
printf("\n Enter size of matrix m x n");
scanf("%d%d",&m,&n);
if(m==n) 
{
printf("\n Enter first matrix data elements");
for(r=0;r<=m-1;r++)
{
for(c=0;c<=n-1;c++)
scanf("%d",&a[r][c]);
}
printf("\n Enter second matrix data elements");
for(r=0;r<=m-1;r++)
{
for(c=0;c<=n-1;c++)
scanf("%d",&b[r][c]);
}
for(r=0;r<=m-1;r++)
{
for(c=0;c<=n-1;c++)
{
for(k=0;k<=n-1;k++)
p[r][c]=a[r][k]*b[k][c]+p[r][c];
}
}
printf("\n Matrix Multiplication data elements are:\n");
for(r=0;r<=m-1;r++)
{
for(c=0;c<=n-1;c++)
printf("%d ",p[r][c]);
printf("\n");
}
}
else
printf("\n multiplication not possible");
return 0;
}