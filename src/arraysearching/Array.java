package arraysearching;

public class Array {

    //-----------------------------------
//      SECOND LARGEST ELEMENT
//        -----------------------------------
    private static int secondLargest(int[] arr) {

        int largest = arr[0];
        int secondLargest = arr[0];

        for(int i=0; i<arr.length;++i){
            int num = arr[i];

            if(largest < num){
              secondLargest = largest;
              largest = num;
            }else if(num > secondLargest & num != largest){
                secondLargest = num;
            }

        }


        return (secondLargest ==arr[0]) ? -1:secondLargest;
    }

    //-----------------------------------
//      FIRST LARGEST ELEMENT
//        -----------------------------------
//    private static int firstLargest(int[] arr) {
//
//        if(arr.length ==0){
//            throw  new IllegalArgumentException("Empty array");
//        }
//
//        int max = arr[0];
//
//        for (int i=0;i<arr.length;++i){
//            if(arr[i]>=max){
//                max = arr[i];
//            }
//
//        }
//
//
//        return max;
//    }

    public static void main(String[] args) {
        int[] arr = {10, 20, 300, 40, 50};

       int value =  secondLargest(arr);
//       int value = firstLargest(arr);
        System.out.println(value);
    }



}
