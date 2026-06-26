// Ques. Maximum 1s
 #include<stdio.h>
int main()
{
    int a[10][10],r,c,i,j,count,max=0,row=-1;

    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }}

    for(i=0;i<r;i++)
    {
        count=0;

        for(j=0;j<c;j++)
        {
            if(a[i][j]==1)
                count++;
        }

        if(count>max)
        {
            max=count;
            row=i+1;
        }}

    printf("Row = %d",row);

    return 0;
}