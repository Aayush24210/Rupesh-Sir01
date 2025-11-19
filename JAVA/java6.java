// class java6 {                             //static or non static variable
//     int a=20;             //instant varible
//     public static void main(String[] args) {
//         java6 obj =new java6();
//         System.out.println(obj.a);   
//     }
//   }              
  
// class java6 {
//     static void sum(){
//         System.out.println("hello");
//     }
// public static void main(String[] args) {
//     java6 obj=new java6();
//     obj.sum();
// }
// }

// class Car {
// static String name ="CARX";
//  void sum(){
//     System.out.println(name);
//  }
    
// }
// class Main{
//     public static void main(String[] args) {
//         Car obj = new Car();

//         obj.sum();
//     }
// }

// class Car {
//  String name ="CARX";
//  static void sum(){
//    Car a = new Car();
//     System.out.println(a.name);
//  }
    
// }
// class Main{
//     public static void main(String[] args) {
//         Car obj = new Car();
//         obj.sum();
//     }
// 


// class Car {
//     Car(int a){
//        String name;
//        Car(int a,String name); //   
//   }
// }           
// class Main{
//     public static void main(String[] args) {
//                     // this.  Operator helps compiler to improve productivity Thankuu
//         Car s1=new Car(5);
//         Car s2=new Car(4);
//         Car s3=new Car(7);
//     }
// }
//   class Car {
//     public Car (){
//         System.out.println("hello");
//     }
//     public Car(int a ){
//         System.out.println(a);
//     }
//     public class java6 {
    
//         public static void main(String[] agrs){
//             Car s1 = new Car();
//             Car s2 = new Car(5);
//             Car s3 = new Car();
//             System.out.println(a,b);
//         }
//     }
//   }

//   class Car {
//     public Car (){
//         System.out.println("hello");
//     }
//     public Car(int a ){
//         System.out.println(a);
//     }
//     public class java6 {
    
//         public static void main(String[] agrs){
//             Car s1 = new Car();
//             Car s2 = new Car(5);
//             Car s3 = new Car();
//             System.out.println(a,b);
//         }
//     }
//   }




//     Single level inheritance
// class Animal{
//     void eat(){
//         System.out.println("Bicuit");
//     }
//     class Dog extends Animal{
//         void bark(){
//             System.out.println("Whauuh uuh uahhoo hooo hooo !");
//         } 
//     }
//     class Puppy extends Dog{
//         void Sleep(){
//             System.out.println("koi kam nhi");
//         }
//     }
    class Parent{
        int x = 10;
        Parent(){
            System.out.println("parent Constructer: x ="+x);
        }
    class Child extends Parent{
            Child(){
                System.out.println("Child suoer.x = "+ super.x);
            }
        }  // super refers ot Parents class 
        void show(){
            int x = 30;
            System.out.println("local x ="+x);
            System.out.println("local x ="+this.x);
            System.out.println("local x ="+ super.x);
        }
        public static void main(String[] args){
            Child c = new Child();
            c.show();
        }

    }
