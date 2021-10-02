const arr = [1,2,3,4,5,6,7,8,9,20];

const binary_search = (arr, start, end, num) => {
   const midele = start + Math.floor((end - start)/2);
   if(start <= end){
      if(arr[midele] === num){
         return "Element found at "+ midele;
      }
      if(num < arr[midele]){
         return binary_search(arr, start, midele-1, num);
      }
      if(num > arr[midele]){
         return binary_search(arr, midele+1, end, num);
      }
   }
   return "Element not found";
};

console.log(binary_search(arr, 0, arr.length-1, 5));