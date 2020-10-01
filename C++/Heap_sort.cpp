#include <iostream>

using namespace std;

// O(log(N))
void max_heapify(int ar[], int n, int i)
{
    int largest, l, r;
    largest = i;   // largest number will be root element
    l = 2 * i + 1; // left node =  2*i + 1
    r = 2 * i + 2; // right node = 2*i + 2

    if (l < n && ar[l] > ar[largest]) // check if root is smaller than left node
        largest = l;

    if (r < n && ar[r] > ar[largest]) // check if root is smaller than right node
        largest = r;

    if (largest != i) // if the largest element is not same
    {
        swap(ar[i], ar[largest]);
        max_heapify(ar, n, largest); // now heapify the next sub trees
    }
}

// O(n)
void heapSort(int ar[], int n) // heapsort() function calles the heapify function for n times to ensure that all elements are sorted
{
    for (int i = n / 2 - 1; i >= 0; i--) // convert array into heap form
        heapify(ar, n, i);

    for (int i = n - 1; i > 0; i--) // now check for each element of the array
    {
        swap(ar[0], ar[i]); // swap the root with the last element and ...
        heapify(ar, i, 0);  // max heapify it
    }
}

// print the array
// O(n)
void printaray(int ar[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
        cout << ar[i] << " ";
    cout << "\n";
}

int main() // calling in the main function
{
    int n;
    int ar[] = {5, 6, 7, 2, 3, 1, 10, 12};
    n = sizeof(ar) / sizeof(ar[0]);

    heapSort(ar, n);

    cout << "Sorted aray is \n";
    printaray(ar, n);
}
