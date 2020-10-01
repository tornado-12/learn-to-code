/*
====Selection Sort====
1. Selection Sort is one of the simpler and more intuitive sorting algorithms. It is an in-place, unstable, comparison algorithm.
2. This algorithm divides the input array into two sublists - a sorted and unsorted sublist. The sorted list is located at the start of the collection, and all elements to the right of the final sorted element are considered unsorted.
3. Initially, the sorted list is empty, while the rest of the collection is unsorted. Selection Sort goes through the unsorted sublist and finds the smallest or largest element.
4. The element is then swapped with the leftmost element of the unsorted sublist. Then, the sorted sublist is expanded to include that element.
5. This is repeated, finding the fitting element, swapping it with the leftmost element of the unsorted list, and expanding the sorted list to encompass it.
*/

// array to sort
var array = [9, 2, 5, 6, 4, 3, 7, 10, 1, 8];

// utility fumction swap
function swap(array, i, j) {
  var temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}

function selectionSort(array) {
  for(var i = 0; i < array.length; i++) {
    // Finding the smallest number in the subarray
    var min = i;
    for(var j = i + 1; j < array.length; j++) {
      if(array[j] < array[min]) {
        min = j;
      }
    }
    if(i !== min) {
      // Swapping the elements
      swap(array, i, min);
    }
  }
  return array;
}

console.log(selectionSort(array)); // => [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ]
