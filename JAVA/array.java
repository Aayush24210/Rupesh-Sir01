
// class array {
//     public static void main(String[] args) {
//         System.out.println("Hello");
//         try {
//             int a = 5;
//             int b = 0;           // b=null;
//             int c = a / b;       // randomly if we use "if else" on this code the code will not run after error
//             System.out.println(c);
//         } catch (Exception e) {              
//             System.out.println(e);
//         }
//  finally {
//             System.out.println("Mar gya!!");
//          }
//         System.out.println("Bye!!");
//     }

// }
// import java.util.Scanner;
// class array {
//     public static void main(String[] args) {
//         try {
//             voteAge(15);
//         } catch (Exception e) {
//             System.out.println(e);
//         }
//         // try {
//         //     voteAge(19);
//         // } catch (Exception e) {
//         //     System.out.println("aap vote de skte h");
//         // }
//     }

//     static void voteAge(int age) {

//         throw new UnsupportedOperationException("aap vote nhi de sakte !!");
//     }
// }


//sliding window
// class Slidingwindow{
//     public static void main(String[] args) {
//         int[] arr = {1, 2, 3, 4, 5};
//         int k = 3;
//         int maxSum = findMaxSum(arr, k);
//         System.out.println("Maximum sum of subarray of size " + k + " is: " + maxSum);
//     }

//     static int findMaxSum(int[] arr, int k) {
//         int maxSum = 0;
//         int windowSum = 0;

//         for (int i = 0; i < arr.length; i++) {
//             windowSum += arr[i];
//             if (i >= k - 1) {
//                 maxSum = Math.max(maxSum, windowSum);
//                 windowSum -= arr[i - (k - 1)];
//             }
//         }
//         return maxSum;
//     }
// }

// defrence beetween throw and throws

public class array {
    public static void main(String[] args){
        try {
            riskyMethod();
        } catch (Exception e) {
            System.out.println("Main m handle hua \n" + e );
        }
        System.out.println("Program Continues...");
    }
    static void riskyMethod() throws Exception {
        System.out.println("Risky Method Started");
        int result = 10 / 0; // This will cause ArithmeticException
        System.out.println("result: " + result);

    }
    
}