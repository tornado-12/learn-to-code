
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class BubbleSort {
    public static void bubbleSort(int[] a){
          int n = a.length;
          // if size is zero or 1 array is already sorted.
          if(n==0||n==1) return;
          else {
              // classic bubble sort algorithm
              for(int i=0;i<n-1;i++)
              {
                  for(int j=0;j<n-1;j++)
                  {
                      if(a[j]>a[j+1])
                      {
                          int temp=a[j];
                          a[j]=a[j+1];
                          a[j+1]=temp;
                      }
                  }
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
        bubbleSort(arr);
        System.out.println("Output after Sorting");
        for(int k: arr){
            System.out.print(k+" ");
        }
    }
}

