#include<stdio.h>

void main()
{
    int n,m,flag,i;
    printf("enter the number :");
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            printf("Number is not prime");
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Number is prime");
}
