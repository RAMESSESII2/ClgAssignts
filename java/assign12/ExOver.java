import java.io.*;

class ParentClass{
  //parent class not declaring any exceptions
  void method(){
    System.out.println("Parent class");
  }
}

class ExOver extends ParentClass{
  //child class declares an unchecked exception
  void method() throws ArithmeticException{
    System.out.println("Child class =>> overrides parent class when Parent class doesn't declare any exception and child class declares an unchecked exception.");
  }

  public static void main(String args[])
  {
    ParentClass obj = new ExOver();
    obj.method();
  }
}
