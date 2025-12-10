 import java.util.HashSet;//HashSet
import java.util.LinkedHashSet;
   //     27\11\25
//  class HashSet {
//     public static <integer> void main(String[]agrs){
//         int arr []={1,2,4,3,2};
//             HashSet<integer>set=new HashSet<>();
//             for(int x:arr){
//                 set.add(x);
//             }
//             if (arr.length==set.size()) {
//                 System.out.println(true);
//             }
//             else{
//                 System.out.println(false);
//             }
//     }
 
// }//    Intersection 


// class HashSet {
//     public static <integer> void main(String[]agrs){
//         int arr1 []={1,2,4,5};
//         int arr2 []={1,2,4};
//             HashSet<integer>set=new HashSet<>();
//             int[] arr;
//             for(int x:arr1){
//                 set.add(x);
//             }
//                 System.out.println(true);
//             }
//             HashSet<integer>result=new HashSet<>();
//             for(int y:arr2)
//                 if(set.contains(y)){
//                     result.add(y);  
//                 }
        
//         }




// class Hashmap {
//     public static void main(String[] args) {
//         LinkedHashSet<Integer> set = new LinkedHashSet<>();
//         set.add(7);
//         set.add(3);
//         set.add(5);
//         set.add(3); // Duplicate element, will not be added
//     }
    
// }

class TreeSet {
    public static void main(String[] args) {
        java.util.TreeSet<Integer> set = new java.util.TreeSet<>();
        set.add(7);
        set.add(3);
        set.add(5);
        set.add(3); // Duplicate element, will not be added

        for (Integer num : set) {
            System.out.println(num);
        }
    }
}

//Hashmap 