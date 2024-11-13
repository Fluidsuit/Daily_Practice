import java.util.*;

public class Kadanes { 
    public static void kadanes(int nums[]) { 
        int cs = 0; 
        int ms = Integer.MIN_VALUE; 

        for (int i = 0; i < nums.length; i++) { 
            cs += nums[i]; 
            ms = Math.max(ms, cs); 
            if (cs < 0) { 
                cs = 0; 
            }
        }

        System.out.println("The largest sum of the subarray is: " + ms);
    }

    public static void main(String args[]) {
        int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; 
        kadanes(nums); 
    }
}

// O/P = The largest sum of the subarray is: 6
