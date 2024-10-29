import java.util.*;

public class subAraays
{
    public static void subAraay(int num[])
    {
        for(int i=0; i < num.length; i++)
        {
            int start = i;
            for(int j=i;j<num.length;j++)
            {
                int end= j;
                for(int k=start;k<=end;k++)
                {
                    System.out.print(num[k] + " ");
                }
                System.out.println();
            }
            System.out.println(); 
        }
    }

    public static void main (String args[])
    {
        int num[] = {2,4,6,8,10};
        // int num[] = {2,4,15,6,3};
        subAraay(num);

    }
    
}


//output: 2 
//        2 4
//        2 4 6
//        2 4 6 8
//        2 4 6 8 10

//        4
//        4 6
//        4 6 8
//        4 6 8 10

//        6
//        6 8
//        6 8 10

//        8
//        8 10

//        10