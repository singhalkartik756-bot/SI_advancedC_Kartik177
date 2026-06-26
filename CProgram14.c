// Ques. Majority element
 # include<stdio.h>
int main()
{
    int arr [8] = {1,2,2,2,4,2,2,5}
    int count = 0;
    for (int i=0; i<8; i++){

      for (int j=i+1; j<8; j++){
     
        if (arr[i]==arr[j]){ 
            count++; } 
            else
            { count--:}
        }
            if (count>1){

         printf ("%d", arr[i])。}}

        return 0;
            }

