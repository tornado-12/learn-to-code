#include<stdio.h>

void main()
{
    int a[100],n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int i,t,flag=0,beg,mid,end;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the element to be searched:");
    scanf("%d",&t);
    beg=0;
    end=n-1;
    while(beg!=end)
    {
        mid=(beg+end)/2;
        if(t<a[mid])
            end=mid-1;
        else if(t>a[mid])
            beg=mid+1;
        else if(t==a[mid])
        {
            printf("element found at %d",mid+1);
            flag=1;
            break;
        }

    }
    if(flag==0)
        printf("Element not found");
}
