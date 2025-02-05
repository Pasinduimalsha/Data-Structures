package arraysearching;

public class LinearSearch {


    //-----------------------------------
//        WHEN SORTED AND ELEMT IS CLOSE TO ENDS
//        -----------------------------------

    private static int search(int[] arr, int key) {

        int left = 0; int right = arr.length -1;

        for(int i=0;i<arr.length;++i){
            if(left <= right){
                if(arr[left] == key) return left;
                if(arr[right] == key) return right;

                left++;
                right--;
            }
        }

        return -1;
    }

    //-----------------------------------
//        WHEN UNSORTED
//        -----------------------------------

//    private static int search(int[] arr, int key) {
//       for(int i=0;i<arr.length;++i){
//           if(arr[i]==key){
//               return i;
//           }
//
//
//       }
//
//        return -1;
//    }


    public static void main(String[] args) {
        int[] arr = {10, 20, 30, 40, 50};
        int key = 40;
        int index = search(arr, key);
        System.out.println(index);


    }




}
