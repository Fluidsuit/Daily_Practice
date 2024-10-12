public class binary_search
{   

    public static int binarySearch(int binary[],int key)
    {
        int start = 0, end = binary.length-1;
        
        while (start <= end) 
        {
            int mid = (start + end)/2;
            if(binary[mid] == key)
            {
                return mid;
            }
            if (binary[mid] > key)
            {
                end = mid-1;
            }else
            {
                start= mid+1;
            }
        }
        return -1;
    }

    public static void main (String args[])
    {
        int binary[] = {2,4,5,8,21,25,28,30};
        int key=21;
        System.out.println("key is at index : " + binarySearch(binary, key));
    }
}
//output : key is at index : 4