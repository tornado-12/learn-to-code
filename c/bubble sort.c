#include<stdio.h>

void main()
{
    int a[100],n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int i,j,temp;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("the sorted array is:");
    for(i=0;i<n;i++)
        printf(" %d",a[i]);

}
