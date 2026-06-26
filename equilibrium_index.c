#include<stdio.h>

int main(){
    int n,arr[n];
    printf("enter the no. of element in array %d\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("array %d\n");
        scanf("%d",&arr[i]);
    }
    int equilibrium_index=arr[0];
    for(int i=0;i<n;i++)
    {
        equilibrium_index=arr[i];
    }
    int sum_l;
    for(int j=i-1;j>=0;j++)
    {
        sum_l += arr[j];
    }
    int sum_r;
    for(int k=i+1;k<n;k++)
    {
        sum_r += arr[k];
    }
    int count = 0;
    if(sum_l==sum_r)
    {
      count++;
    }
    printf("total equilibrium index = %d\n",count);
    return 0;
}