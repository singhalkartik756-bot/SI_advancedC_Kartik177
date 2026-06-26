// Ques. Matrix boundary traversal 
 #include <stdio.h>
int main()
{
    int a[10][10];
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("\nBoundary elements are");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(i == 0 || j == 0 || i == r - 1 || j == c - 1)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}