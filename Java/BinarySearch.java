import java.io.BufferedReader;
import java.io.InputStreamReader;

public class BinarySearch {
    public static  void binarySearch(int[] arr, int x){
        int n = arr.length;
        if(n==0){
            System.out.println("Element Not Found!");
            return;
        }
        int low =0, high=n-1;
        while (low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid] == x){
                System.out.println("Element found at index:"+mid);
                return;
            }
            else if(arr[mid]>x){
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
    }

    public static void main(String[] args) throws  Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the size of Sorted array");
        int t = Integer.parseInt(br.readLine());
        int[] arr = new int[t];
        System.out.println("Enter the elements of Sorted array with space seperation");
        String[] s = br.readLine().trim().split(" ");
        int i=0;
        for(String c: s){
            arr[i] = Integer.parseInt(c);
            i++;
        }
        System.out.println("Enter the element to search in the array");
        int x = Integer.parseInt(br.readLine());
        binarySearch(arr,x);
    }
}

