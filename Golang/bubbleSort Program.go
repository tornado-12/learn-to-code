package main

import "fmt"

func bubbleSort(arr []int) []int{

	for i:=0; i<=len(arr)-1; i++{
		for j:=0; j<len(arr)-1-i; j++{
			if arr[j]> arr[j+1]{
				arr[j], arr[j+1] = arr[j+1], arr[j]
			}
		}
	}
	return arr
}

func main(){
	fmt.Println(bubbleSort([]int{9, 2, 3, 1, 0}))
	fmt.Println(bubbleSort([]int{17, 3, 1, 8, 9}))
	fmt.Println(bubbleSort([]int{8, 2, 7, 14, 5}))
}

/*
Bubble Sort Program
--------------------
Input array -	{9, 2, 3, 1, 0}
				{17, 3, 1, 8, 9}
				{8, 2, 7, 14, 5}

Output Sorted array - 	[0 1 2 3 9]
						[1 3 8 9 17]
						[2 5 7 8 14]

Time Complexity - O(n2)

*/