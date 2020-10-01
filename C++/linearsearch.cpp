#include <bits/stdc++.h>
using namespace std;

//function for linear search
int search(vector<int> arr, int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

// the main driver program
int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr.push_back(input);
    }

    int x;
    cout << "What element to search for : ";
    cin >> x;

    int index = search(arr, n, x);
    if (index == -1)
        cout << "Element is not present in the array";
    else
        cout << "Element found at position " << index;

    return 0;
}