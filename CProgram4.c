// Ques. Find missing number in array
 #include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j, found;

    for(i = 1; i <= size + 1; i++)
    {
        found = 0;

        for(j = 0; j < size; j++)
        {
            if(arr[j] == i)
            {
                found = 1;
                break;
            }}

        if(found == 0)
        {
            printf("Missing number = %d", i);
        }
    }

    return 0;
}