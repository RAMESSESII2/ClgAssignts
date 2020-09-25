abstract class EMP{
 int emp_id;
 String name, date;
 void get_info(int id, String name, String join_date)
 {
  emp_id = id;
  this.name = name;
  this.date = join_date;
 }
 abstract double salary();
 void display()
 {
  double s = this.salary();
  System.out.println("Salary is Rs " + s);
  System.out.println("Details: ");
  System.out.println("ID: " + emp_id);
  System.out.println("Name: " + name);
  System.out.println("Date of joining: " + date);
 }
}

class Manager extends EMP{
 double salary()
 {
  return 65000 * 1.75;
 }
}

class Sales extends EMP{
 double salary()
 {
  return 30000 * 1.99;
 }
}

public class p2 {
 public static void main(String[] args) {
  Manager mgr = new Manager();
  mgr.get_info(23232, "Manager", "01/02/00");
  Sales sls = new Sales();
  sls.get_info(56565, "Sales", "01/01/00");
  mgr.display();
  System.out.println();
  sls.display();
 }
}
