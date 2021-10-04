package main

import "fmt"

func selectionSort(items []int) []int{
    var n = len(items)
    for i := 0; i < n; i++ {
        var minIdx = i
        for j := i; j < n; j++ {
            if items[j] < items[minIdx] {
                minIdx = j
            }
        }
        items[i], items[minIdx] = items[minIdx], items[i]
    }
    return items
}

func main(){
	fmt.Println(selectionSort([]int{9, 2, 3, 1, 0}))
	fmt.Println(selectionSort([]int{17, 3, 1, 8, 9}))
	fmt.Println(selectionSort([]int{8, 2, 7, 14, 5}))
}

/*
Selection Sort Program
--------------------
Input array -	{9, 2, 3, 1, 0}
				{17, 3, 1, 8, 9}
				{8, 2, 7, 14, 5}

Output Sorted array - 	[0 1 2 3 9]
						[1 3 8 9 17]
						[2 5 7 8 14]

Time Complexity - O(n2)

*/