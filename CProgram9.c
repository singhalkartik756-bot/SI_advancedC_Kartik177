// Ques. Spiral matrix generation
 #include<stdio.h>
 int main()
{
    int a[10][10];
    int n, i, j;
    int num=1,top, bottom, left, right;
    printf("Enter size of matrix: ");
    scanf("%d",&n);
    top = 0;
    bottom = n - 1;
    left = 0;
    right = n - 1;

    for(; top<=bottom && left<=right; ){
        for(i=left; i<=right; i++)
            a[top][i] = num++;
        top++;

        for(i=top; i<=bottom; i++)
            a[i][right] = num++;
        right--;

        for(i=right; i>=left; i--)
            a[bottom][i] = num++;
        bottom--;

        for(i=bottom; i>=top; i--)
            a[i][left] = num++;
        left++;
    }

    printf("\nSpiral Matrix:\n");

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
   }