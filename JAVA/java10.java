// import java.util.ArrayList;
// class java10 {
    //     public static void main(String[] args) {
        //         Arraylist<integer>list = new ArrayList<>();
        //         list.add(5);
        // }
        
        import java.util.HashMap;
// class Main {
//     public static void main(String[] args) {
//         HashMap<Integer,Integer> map=new HashMap<>();
//         int arr[]={1,2,3,4,5,6};
//         for (int x : arr) {
//             map.put(x, map.getOrDefault{x,getOrDefault(0)}+1);

//         }
//             System.out.println(map);
//     }
// }
        // map.put(1,10);
        // map.put(2,20);
        // System.out.println(map.get(3));
        // System.out.println(map.getOrDefault(3, null));
        // System.out.println(map.containsKey(3));
        // for (int x : map.keySet()) 
        // { 
        //     System.out.println(map.keySet());    
        // }
//     }
// }

class Main{
    public static void main(String[] args) {
        String str="abcdaba";
        HashMap<Character,Integer>map=new HashMap<>();
        for (char ch : str.toCharArray()) {
            map.put(ch,map.getOrDefault(ch, 0)+1);
            
        }
        
    }
}