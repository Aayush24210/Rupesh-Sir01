// public class main2 {
//     class main{
//         public static void main(String[] args){
//             String str =" hello ";
//             System.out.println(str.length());
//             System.out.println(str.charAt(1));
//             System.out.println(str.toUpperCase());
//             System.out.println(str.toLowerCase());
//             System.out.println(str.toLowerCase());
//             System.out.println(str.trim());
//             System.out.println(str.substring(2));
//             System.out.println(str.substring(2));
//             System.out.println(str.indexOf(str));
            
            
//         }
//     }
// }

// public class main2
//  {
    //   public static void main(String[] agrs){
    //   String  a = "aba";
    //   String b= "";
    //   for (int i =a.length()-1; i>=0;i--) {
    //     b+=a.charAt(i);
    //   }  
    //   if (a.equals(b)) {
    //     System.out.println("hai jii");}
        
    //     else{
    //         System.out.println("nah ji ");
    //     }
    //   }
    //   }
    // public class main2{
    // public static void main(String[] args){
    //     String str="java";
    //     int v = 0;
    //     for (char ch : str.toCharArray()) {
    //         if ("aeiou".indexOf(ch)!=-1) {
    //             v++;
    //             System.out.println("Ram Ram 🙌👍🙌✌");
    //         }
    //     }
    // }
    // }
    // public class main2{
    // public static void main(String[] args){
    //     int freq[]= new int[256];

    //     String str="Watermelon";
    //     for (char ch :str.toCharArray()) {
    //         freq[ch]++;
    //     }
    //     for (int i = 0; i < 256; i++) {
    //         if (freq[i]>0) {
    //             System.out.println((char)i +"->"+ freq[i]);
    //         }
            
    //     }
    // }
    // }
    
    // public class main2{
    // public static void main(String[] args){
    //     String str="java is powerfull";    /*  */
    //     String a[]=str.split(" ");
    //     String lagest="";
    //     for (String val : a) {
    //         if (val.length()>lagest.length()) {
    //             lagest=val;
    //         }
    //     }
    //     System.out.println(lagest);
    // }

// import java.util.Arrays;

//  class main2 {
//     public static void main(String[] args) {
        
    
//             String a = "hello";
//             String b =  "lloeh";
//             char ch1[]=a.toCharArray();
//             char ch2[]=b.toCharArray();
//             Arrays.sort(ch1);
//             Arrays.sort(ch2);

//                 String str1=new String(ch1);
//                 String str2=new String(ch2);
//                 if(str1.equals(str2)){
//                     System.out.println(true);
//                 }else{
//                     System.out.println(false);
//                 }
//             }
//             }
    
class hello {     //static or non static variable
    int a=20;    //instant varible
    public static void main(String[] args) {
        hello obj =new hello();
        System.out.println(obj.a);   
    }
  }              
  