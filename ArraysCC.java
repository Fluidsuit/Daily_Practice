import java.util.*;

public class ArraysCC
{
    public static int getlargest(int largerNum[])
    {
        int number= Integer.MIN_VALUE;
        int smallest = Integer.MAX_VALUE;

        for(int i=0; i < largerNum.length;i++)
        {
           if (number < largerNum[i])
            {
                number = largerNum[i];
            }
            if (smallest > largerNum[i])
            {
                smallest  = largerNum[i];
            }
        }

        System.out.println("Smallest number is :" + smallest);
     return number;
    }

    public static void main (String args[])
    {
        int largerNum[] = {1,2,6,3,5};
        System.out.println("Largest Number is :" + getlargest(largerNum));
    }
}





// output : Smallest number is :1
//          Largest Number is :6