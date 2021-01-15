import java.io.*;

class ParentClass{
  //parent class not declaring any exceptions
  void method() throws RuntimeException{
    System.out.println("Parent class");
  }
}

class ExOver2 extends ParentClass{
  //child class declares an unchecked exception
  void method() throws ArithmeticException{
    System.out.println("Child class =>> overrides parent class when Parent class declares an unchecked exception and child class declares an exception which is a child class of ParentClass exception");
  }

  public static void main(String args[])
  {
    ParentClass obj = new ExOver2();
    obj.method();
  }
}
