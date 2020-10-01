
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class InsertionSort {
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
        insertionSort(arr);
        System.out.println("Output after Sorting");
        for(int k: arr){
            System.out.print(k+" ");
        }
    }

    private static void insertionSort(int[] arr) {
        int n = arr.length;
        // if size is zero or 1 array is already sorted.
        if(n==0||n==1) return;
        // Classic Insertion Sort
        for (int i = 1; i < n; ++i) {
            int k = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > k) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = k;
        }
    }
}

