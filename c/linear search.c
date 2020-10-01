#include<stdio.h>

void main()
{
    int a[100],n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int i,t,flag=1,beg,mid,end;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the element to be searched:");
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(t==a[i])
        {
            flag=0;
            printf("element at %d",i+1);
        }

    }
    if(flag==1)
        printf("element not found");
}
