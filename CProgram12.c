// Ques. Count inversions in array
 # include<stdio.h>
int main()
{

int n, count=0, arr [n];

for (int i=0; i<n ;i++){

Scanf("%d", & arr[i]);
}

for (int i=0; i<n-1;i++){

for (int j=i+1;j<n;j++){

if (arr[i]>a[j]){
Count ++;
}}}

printf("%d", Count); 

return 0;
}