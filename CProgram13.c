// Ques.Dutch national flag problem 
 #include <stdio.h>

int main()
{
    int a[10] = {2, 0, 1, 2, 1, 0, 2, 1, 0, 1};
    int i, j, temp;

    for(i = 0; i < 10; i++){
        for(j = i + 1; j < 10; j++){
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }}}

    printf("Array after sorting:\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}