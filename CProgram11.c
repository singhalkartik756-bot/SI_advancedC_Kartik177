// Ques. Search in sorted matrix 
 #include<stdio.h>
int main()
{
    int a[10][10], r, c, i, j, key, search = 0;

    scanf("%d%d", &r, &c);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }}

    scanf("%d", &key);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(a[i][j] == key)
            {
                printf("Search at %d and %d", i + 1, j + 1);
                search = 1;
                break;
            }}}

    if(search == 0)
        printf("Not Search");

    return 0;
}