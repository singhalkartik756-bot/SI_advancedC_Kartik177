// Ques. Leader in an array
 #include <stdio.h>
 int main()
{
    int a[6] = {16, 17, 4, 3, 5, 2};
    int i, j, n = 6;
    int leader;

    printf("Leader elements are");

    for(i = 0; i < n; i++)
    {
        leader = 1;

        for(j = i + 1; j < n; j++)
        {
            if(a[i] <= a[j])
            {
                leader = 0;
                break;
            }}

        if(leader == 1)
        {
            printf("%d ", a[i]);
        }}

    return 0;
}