#include<stdio.h>
int main(){
    int n,arr[n],insert_index;
    printf("enter the no. of element in array %d\n");
    scanf("%d",&n);

    printf("insert index =%d\n");
    scanf("%d",&insert_index);

    for(int i=0;i<n;i++)
    {
        printf("array=%d\n");
        scanf("%d",&arr[i]);
    }
    for( int i=n-1;i<=insert_index;i++)
    {
        arr[i+1]=arr[i];
    }
    arr[insert_index-1]=element;
    n++;
    printf("%d",arr[i]);
    return 0;
}