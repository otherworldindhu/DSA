#include<stdio.h>
int main()
{
    int a,i,n,arr[20],big,end,mid,found=0;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter sorted array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter no to be searched:");
    scanf("%d",&a);
    big=0,end=n-1;
    while(big<=end)
    {
        mid=(big+end)/2;
        if(arr[mid]==a)
        {
            printf("element found at:%d",mid+1);
            found=1;
            break;
        }
        else if(arr[mid]>a)
        {
            end=mid-1;
        }
        else
        {
            if(arr[mid]<a)
            {
                big=mid+1;
            }
        }
    }
    if(found==0 && big>end)
    {
        printf("element does not exist.");
    }
    return 0; 
}