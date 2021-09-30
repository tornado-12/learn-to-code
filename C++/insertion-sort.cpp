#include<iostream>

using namespace std;

void input(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}

void display(int a[],int n)
{
    cout<<("the elements of array are: ");
    for(int i=0;i<n;i++)
        cout<<a[i]<<(" ");
}

int main()
{
    int a[100],n,d,temp;
    cout<<("enter size of array: ");
    cin>>n;
    cout<<("enter elements of array :");
    input(a,n);
    for(int i=0;i<n-1;i++)
    {
        d=i;
        while(a[d]>a[d+1]&&d>=0)
        {
            temp = a[d];
            a[d] = a[d+1];
            a[d+1] = temp;
            d--;
        }
    }
    cout<<("array after sorting\n");
    display(a,n);
}
