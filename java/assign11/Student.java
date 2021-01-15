import java.util.Scanner;
public class Student {
   int m;
   public void setMarks(int marks) {
      if(marks < 0 || marks > 100)
         throw new IllegalArgumentException(Integer.toString(marks));
      else
         m = marks;
   }
   public static void main(String[] args) {
      Scanner scan = new Scanner(System.in);
      System.out.println("Enter an integer: ");
      int marks = scan.nextInt();
      Student s1 = new Student();
      s1.setMarks(marks);
      System.out.println(s1.m);
      Student s2 = new Student();
      s2.setMarks(marks);
      System.out.println(s2.m);
   }
}
