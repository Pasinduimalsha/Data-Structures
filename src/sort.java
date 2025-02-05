

public class sort {



    public static void main(String[] args){

        System.out.println("Pasi");
    }
}




//SORTING ONE DIMENSIONAL ARRAY
//import java.util.Arrays;
//
//public class sort {
//
//    public static void main(String[] args){
//
//        int[] array = {5,6,3,5,2};
//
//        for (int i =0;i < array.length;i++){
//
//            for (int j=i+1; j < array.length;++j){
//                int temp = array[i];
//                if(array[i] < array[j]){
//                    array[i] = array[j];
//                    array[j] = temp;
//                }
//            }
//              System.out.println(array[i]);
//              TO PRINT AN ARRAY AS LINE BY LINE
//        }
//        System.out.println(Arrays.toString(array));
//    }
//
//}

// Arrays.sort(arr);
// Collections.sort()

//QUICK SORT
//import java.sql.SQLOutput;
//import java.util.Arrays;
//
//public class sort {
//
//    static int partition(int array[], int Low, int High){
//
//        int pivot = array[High];
//
//        int i = Low -1;
//
//        for (int j = Low; j <= High -1; j++ ){
//
//            if(array[j] > pivot){
//                i++;
//                swap(array,i,j);
//            }
//
//        }
//        System.out.println(Arrays.toString(array));
////        swap(array,i+1,High);
//        return i+1;
//    }
//
//    static void swap(int array[], int i, int j){
//        int temp = array[i];
//        array[i] = array[j];
//        array[j] = temp;
//    }
//
//    static void quickSort(int array[], int Low, int High){
//        if(Low <= High){
//            int pi = partition(array, Low, High);
//            quickSort(array, Low, pi -1);
//            quickSort(array,pi+1 , High);
//
//        }
//    }
//
//    public static void main(String[] args){
//
//        int array[] = {10, 7, 8, 9, 1, 5};
//        int n = array.length;
////        System.out.println(n);
//        //Low //High
//        quickSort(array,0,n-1);
//
//    }
//}


