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

    int a[20],n,i,j,t;
    printf("enter size of array:");
    scanf("%d",&n);
    input(a,n);
    printf("Sorting array using insertion sort \n");
    for(i=1;i<n;i++)
    {
        j=i;
        while(a[j]<a[j-1]&&j>0)
        {
            t=a[j-1];
            a[j-1]=a[j];
            a[j]=t;
            j--;
        }
    }
    printf("array after sorting :");
    output(a,n);
}
