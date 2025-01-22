import java.util.Arrays;
import java.util.Scanner;

public class Solution {


    public void merge(int[] nums1, int m, int[] nums2, int n) {
        System.out.println(Arrays.toString(nums1)+"\n"+m+"\n" + Arrays.toString(nums2)+"\n"+n);

        int[] array = new int[m+n];


    }
    public static void main(String[] args){
       Solution s = new Solution();
       Scanner scanner = new Scanner(System.in);


       int[] num1 = {1,2,3,0,0,0};
       int m = 3;
       int[] num2 = {2,2,6};
       int n = 3;


        s.merge(num1,m,num2, n);
    }

}

