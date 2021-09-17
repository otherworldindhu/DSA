#include<stdio.h>
int main()
{
    int a,i,n,arr[20],found=0;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter no to be searched:");
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            printf("element found at: %d",i+1);
            found=1;
        }
        
    }
    if(found==0)
    {
        printf("element entered is not there in the array");
    }
}