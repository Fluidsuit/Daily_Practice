import java.util.*;

public class pairs_of_array 
{
    public static void pairs(int num[])
    {
        for(int i = 0; i<num.length;i++)
        {
            int current = num[i];
            for(int j=i+1; j<num.length;j++)
            {
                System.out.print("(" + current + "," + num[j] + ")");
            }
            System.out.println();
        }
    }

    public static void main(String args[])
    {
        int num[]={2,4,6,8,10};
        pairs(num);
    }
    
}
// output : (2,4)(2,6)(2,8)(2,10)
//          (4,6)(4,8)(4,10)
//          (6,8)(6,10)
//          (8,10)