#include<stdio.h>

void main()
{
    int n,m,r,rev=0;
    printf("enter the number:");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(rev==m)
        printf("number is palindrome");
    else
        printf("number is not palindrome");
}
