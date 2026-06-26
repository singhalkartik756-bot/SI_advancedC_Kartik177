// Ques. Merge two sorted array
#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 6, 9};
    int b[5] = {4, 5, 8, 11, 12};
    int c[10];
    int i, j, temp;

    // Copy first array
    for(i = 0; i < 5; i++)
    {
        c[i] = a[i];
    }

    for(i = 0; i < 5; i++)
    {
        c[5 + i] = b[i];
    }

    for(i = 0; i < 10; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }}}

    printf("Merged Sorted Array:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}