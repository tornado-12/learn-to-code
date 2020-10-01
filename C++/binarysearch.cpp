#include <bits/stdc++.h>
using namespace std;

//recursive binary search
int binarySearch(vector<int> arr, int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        //if element is present at the middle
        if (arr[mid] == x)
            return mid;

        //element smaller than mid then it will be in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        //element bigger than mid then it will be in right subaaray
        return binarySearch(arr, mid + 1, r, x);
    }

    //if element is not present
    return -1;
}

//the main driver program
int main()
{
    vector<int> arr;
    int n;
    cout << "\nEnter the size of array : ";
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

    int index = binarySearch(arr, 0, n - 1, x);
    if (index == -1)
        cout << "Element is not present in the array";
    else
        cout << "Element found at position " << index;

    return 0;
}