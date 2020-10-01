import java.io.BufferedReader;
import java.io.InputStreamReader;

public class LinearSearch {
    public static  void linearSearch(int[] arr, int x){
        int n = arr.length;
        if(n==0){
            System.out.println("Element Not found");
            return;
        }
        for(int i=0;i<n; i++){
            if(arr[i] == x){
                System.out.println("Element found at index:"+i);
                return;
            }
        }
    }
    public static void main(String[] args) throws  Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the size of array");
        int t = Integer.parseInt(br.readLine());
        int[] arr = new int[t];
        System.out.println("Enter the elements of array with space seperation");
        String[] s = br.readLine().trim().split(" ");
        int i=0;
        for(String c: s){
            arr[i] = Integer.parseInt(c);
            i++;
        }
        System.out.println("Enter the element to search in the array");
        int x = Integer.parseInt(br.readLine());
        linearSearch(arr,x);
    }
}

