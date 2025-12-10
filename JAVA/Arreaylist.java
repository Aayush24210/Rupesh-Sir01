import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
class Student implements  Comparable<Student>{
    String name;
    int RollN;
    public Student(int RollN,String name){
    this.name=name;
    this.RollN=RollN;
    }
    public int compareTo(Student s1) {
        return this.RollN-s1.RollN;
    }
    public String toString() {
    return RollN +" " +name;
    }
}
class NameSorted implements Comparator<Student> {
    public int compare(Student s1,Student s2) {
        return s1.name.compareTo(s2.name);
    }
}
class hello{ 
    public static void main(String[] args) {
        ArrayList<Student>list=new ArrayList<>();
        int RollN;
        list.add(new Student(1, "Bachha"));
        list.add(new Student(2, "Ayush"));
        Collections.sort(list,new NameSorted());
        for(Student s: list){
            System.out.println(s.RollN +" "+s.name);
        }

        System.out.println(list);

    }
}
