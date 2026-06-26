#include<stdio.h>

int main(){
    for(int i=0;i<n;i++)
    {
        for(int space=1;space<=n-i;space++)
        {
            printf(" ");

        }
        for(int j=0; j<=i;j++)
        {
            if(j==0||j==1)
            {
                arr[i][j]=1;
            }
            else{
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            
            }
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }}
        return 0;
}