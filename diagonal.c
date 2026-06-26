#include<stdio.h>

int main(){
    int r,c,mat[r][c];
    printf("value of row and column %d\n");
    scanf("%d",&r,&c);

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("original array %d\n");
            scanf("%d",mat[i][j]);
        }}
        int sum_diagonal=0;
        if(i==j||i+j==r-1)
        {
            sum_diagonal+=arr[i][j];
        }
        int sum_boundary=0;
        if(i==0||j==0||i==r-1||j==c-1)
        {
            sum_boundary+=mat[i][j];
        }
            if(sum_diagonal==sum_boundary)
            {
                printf("sum of element at %d\n",sum_diagonal,sum_boundary);
            }
        return 0;
    }
