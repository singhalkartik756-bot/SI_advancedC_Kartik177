#include<stdio.h>

int main(){
    int n,arr[n];
    printf("enter the no. of element %d\n");
    scanf("%d",&n);

    for(int i=0;i<n/2;i++)
    {
        int temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("final array %d\n");
    return 0;
}