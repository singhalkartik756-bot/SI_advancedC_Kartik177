#include<stdio.h>

int main(){
    int row=5 , col=3, mat[][] , transpose[][];
    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=3;j++)
        {
            printf("original array %d\n");
            scanf("%d",& mat[i][j]);
        }
    }
    for(int i=0; i<=3;i++)
    {
        for(int j=0; j<=5;j++)
        {
         printf("tranpose array %d\n");
         scanf("%d",&transpose[i][j]);
        }
    }
    if(mat[i][j]==transpose[i][j])
    {
        printf("it is symmetric array %d\n",mat[i][j],transpose[i][j]);
    }
    return 0;
}