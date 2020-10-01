import java.io.BufferedReader;
import java.io.InputStreamReader;

public class SelectionSort {
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
        selectionSort(arr);
        System.out.println("Output after Sorting");
        for(int k: arr){
            System.out.print(k+" ");
        }
    }

    private static void selectionSort(int[] a) {
        int n = a.length;
        // if size is zero or 1 array is already sorted.
        if(n==0||n==1) return;

        for(int i=0;i<n;i++)
        {
            int min=a[i];
            int t=i;
            // traverse the array and find mininum element!
            for(int j=i+1;j<n;j++)
            {
                if(min>a[j])
                {
                    min=a[j];
                    t=j;
                }
            }
            // swap with the minimum
            if(t!=i)
            {
                a[t]=a[i];
                a[i]=min;
            }
        }
    }
}

