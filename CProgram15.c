// Median of sorted array
 #include <stdio.h>
int main()
{
    int a[5] = {1, 3, 5, 7, 9};
    int b[5] = {2, 4, 6, 8, 10};
    int c[10];
    int i, j, temp;
    float median;

    for(i = 0; i < 5; i++){
        c[i] = a[i];}

    for(i = 0; i < 5; i++){
        c[i + 5] = b[i];}

    for(i = 0; i < 10; i++){
        for(j = i + 1; j < 10; j++){
            if(c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }}}

    median = (c[4] + c[5]) / 2.0;

    printf("Median = %.2f", median);

    return 0;
}