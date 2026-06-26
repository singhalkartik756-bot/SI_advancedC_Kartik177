#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxSum = arr[0];

    for(i = 0; i < n; i++)
    {
       int sum = 0;

        for(j = i; j < n; j++)
        {
            sum = sum + arr[j];

            if(sum > maxSum)
            {
                maxSum = sum;
            }}}

    printf("Maximum Subarray Sum = %d", maxSum);

    return 0;
}