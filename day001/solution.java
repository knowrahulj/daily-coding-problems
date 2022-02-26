import java.util.*;

public class HelloWorld{

    public static boolean twoNumbersForSum(int[] nums, int sum) {
        Set<Integer> numbersSeen = new HashSet();

        for(int i=0; i<nums.length; i++) {
            if(numbersSeen.contains(sum - nums[i]))
                return true;
            numbersSeen.add(nums[i]);
        }

        return false;
    }

     public static void main(String []args){
        int[] nums1 = {1,2,3,4,5};
        int[] nums2 = {10,20,30,40,50};
        int[] nums3 = {10};
        int[] nums4 = {6};
        int sum = 6;

        System.out.println(twoNumbersForSum(nums1, sum));
        System.out.println(twoNumbersForSum(nums2, sum));
        System.out.println(twoNumbersForSum(nums3, sum));
        System.out.println(twoNumbersForSum(nums4, sum));
     }
}