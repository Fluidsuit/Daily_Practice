public class Bubble_sort
{
    public static void bubble_sort(int arr[])
    {
        for(int i=0;i<arr.length-1;i++)
        {
            int swap = 0;
            for(int j=0;j<arr.length-1-i;j++)
            {
                if(arr[j] > arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] =  arr[j+1];
                    arr[j+1] = temp;
                    swap++;
                }
            }
            if (swap == 0)
            {
                break;
            }
        }
    }

    public static void bubble_sort2(int arr[])
    {
        for(int i=arr.length-1;i>=0;i--)
        {
            int swap = 0;
            for(int j=0;j<=i-1;j++)
            {
                if(arr[j] > arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    swap++;
                }
            }
        if (swap==0)
        {
            break;
        }
        }
    }

    public static void printarr(int arr[])
    {
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i] + " ");
        }
    }
    public static void main (String args[])
    {
        int arr[]={2,1,5,4,3};
        bubble_sort2(arr);
        printarr(arr);
    }
}