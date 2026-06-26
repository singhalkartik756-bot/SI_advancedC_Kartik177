// Ques. Equilibrium index
 #include <stdio.h>

int main()
{
    int a[5] = {1, 3, 5, 2, 2};
    int i, j;
   
    for(i = 0; i < 5; i++)
    {
        int leftsum = 0;
        int rightsum = 0;

        for(j = 0; j < i; j++)
        {
            leftsum += a[j];
        }

        for(j = i + 1; j < 5; j++)
        {
            rightsum += a[j];
        }

        if(leftsum == rightsum)
        {
            printf("Equilibrium Index = %d", i);
            
        }}

    return 0;
}