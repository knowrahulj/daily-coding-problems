import java.util.*;

public class HelloWorld{
    public static void printList(int[] nums) {
        for(int i=0; i<nums.length; i++) {
            System.out.print(nums[i] + " ");
        }
        System.out.println();
    }

    public static int[] productOfAllOtherNumbers(int[] nums) {
        int size = nums.length;

        int preMultipler = nums[0];
        int[] res = new int [size];
        Arrays.fill(res, 1);

        for(int i=1; i<size; i++) {
            res[i] = preMultipler;
            preMultipler *= nums[i];
        }

        preMultipler = nums[size -1];
        for(int i=size-2; i >= 0; i--) {
            res[i] *= preMultipler;
            preMultipler *= nums[i];
        }

        return res;
    }

     public static void main(String []args){
        int[] nums1 = {1,2,3,4,5};
        int[] nums2 = {10,20,30,40,50};
        int[] nums3 = {10};
        int[] nums4 = {6};

        printList(productOfAllOtherNumbers(nums1));
        printList(productOfAllOtherNumbers(nums2));
        printList(productOfAllOtherNumbers(nums3));
     }
}