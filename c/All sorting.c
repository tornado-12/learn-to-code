#include<stdio.h>

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

int insertion_sort(int ar[], int n){
    int i, j, temp, index;
    for(i = 1; i < n; ++i){
        temp = ar[i];
        j = i - 1;
        while(j >= 0 && temp < ar[j]) { ar[j + 1] =  ar[j]; --j; }      // Ascending order
        ar[j + 1] = temp;
    }
    return 0;
}

void merge(int ar[], int l, int mid, int r) 
{ 
    int i, j, index; 
    int n1 = mid - l + 1; 
    int n2 = r - mid; 
  
    int L[n1], R[n2]; 
    
    for (i = 0; i < n1; i++) L[i] = ar[l + i];
    for (j = 0; j < n2; j++) R[j] = ar[mid + 1 + j];

    i = j = 0;
    index = l;

    while (i < n1 && j < n2) ar[index++] = L[i] <= R[j] ? L[i++] : R[j++];  // Ascending order

    while (i < n1) ar[index++] = L[i++];

    while (j < n2) ar[index++] = R[j++];
}

void split(int ar[], int l, int r) 
{ 
    if (l < r) {
        int mid = l + (r - l) / 2; 

        split(ar, l, mid); 
        split(ar, mid + 1, r); 
  
        merge(ar, l, mid, r); 
    } 
}

int merge_sort(int ar[], int n){
    split(ar, 0, n - 1);
    return 0;
}

int rule(int ar[], int start, int end) 
{ 
    int pivot, i, j;
    pivot = ar[end];
    i = start - 1;
  
    for (j = start; j <= end- 1; ++j) if(ar[j] < pivot) swap(&ar[j], &ar[++i]);
    swap(&ar[i + 1], &ar[end]);

    return (i + 1);
}

void divide(int ar[], int start, int end) 
{ 
    int pivot;
    if (start < end) { 
        pivot = rule(ar, start, end); 
        divide(ar, start, pivot - 1);
        divide(ar, pivot + 1, end);
    }
}

int quick_sort(int ar[], int n){
    divide(ar, 0, n - 1);
    return 0;
}

void max_heapify(int ar[], int n, int i) 
{ 
    int root, l, r, temp;
    root = i;
    l = 2 * i + 1;
    r = 2 * i + 2;
    if ( l < n && ar[l] > ar[root] ) root = l;
    if ( r < n && ar[r] > ar[root] ) root = r;
    if ( root != i ) {
        swap(&ar[i], &ar[root]);
        max_heapify(ar, n, root);
    } 
} 

int heap_sort(int ar[], int n) 
{ 
    int i, j, temp; 
    for (i = n / 2 - 1; i >= 0; --i)  max_heapify(ar, n, i);
    for (j = n - 1; j > 0; --j) {
        swap(&ar[0], &ar[j]);
        max_heapify(ar, j, 0); 
    }
    return 0;
}

void print_array(int ar[], int n){
    int i;
    for(i = 0; i < n; ++i) printf("%d\t", ar[i]);
    printf("\n");
}

int main(){
    int n, flag, i;
    char choice;

    printf("Enter the size of array - ");
    scanf("%d", &n);

    int ar[n];
    for(i = 0; i < n; ++i) scanf("%d", &ar[i]);
    printf("Original array :\n");
    print_array(ar, n);

    printf("Make a choice :\n I : Inseration sort\nM : Merge sort\nQ : Quick sort\nH : Heap sort\nPress any other key to quit\n");
    flag = 1;

    while(flag){
        printf("\nEnter your choice : ");
        scanf(" %c", &choice);
        
        switch(choice){
            case 'I':
            case 'i':
                insertion_sort(ar, n);
                print_array(ar, n);
                break;
            
            case 'M':
            case 'm':
                merge_sort(ar, n);
                print_array(ar, n);
                break;

            case 'Q':
            case 'q':
                quick_sort(ar, n);
                print_array(ar, n);
                break;

            case 'H':
            case 'h':
                heap_sort(ar, n);
                print_array(ar, n);
                break;
            
            default :
                printf("\nThank you :)\n");
                flag = 0;
                break;
        }
    }
    return 0;
}