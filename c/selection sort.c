#include<stdio.h>

void output(int a[],int n)
{
    int i;

    for(i=0;i<n;i++)
    printf(" %d",a[i]);
    printf("\n");
}
void input(int a[],int n)
{
   int i;
   printf("Enter elements of array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}

void main()
{
    int a[20],n,i,j,t,min;
    printf("enter size of array:");
    scanf("%d",&n);
    input(a,n);
    printf("Sorting array using Selection sort \n");
    for(i=0;i<n;i++)
    {
        min=a[i];
        t=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                t=j;
            }
        }
        if(t!=i)
        {
            a[t]=a[i];
            a[i]=min;
        }
    }
    printf("array after sorting :");
    output(a,n);
}
