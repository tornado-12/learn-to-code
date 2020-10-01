public static int recursiveBinarySearch(int arr[], int firstElement, int lastElement, int elementToSearch) {

    if (lastElement >= firstElement) {
        int mid = firstElement + (lastElement - firstElement) / 2;

        
        if (arr[mid] == elementToSearch)
            return mid;

        
        if (arr[mid] > elementToSearch)
            return recursiveBinarySearch(arr, firstElement, mid - 1, elementToSearch);

        
        return recursiveBinarySearch(arr, mid + 1, lastElement, elementToSearch);
    }

    return -1;
}

