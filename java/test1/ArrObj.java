class Stud{
  String name;
  String dept;
  int year;
  int std_id;
  Stud(String name, String dept, int year, int std_id){
    this.name = name;
    this.dept = dept;
    this.year = year;
    this.std_id = std_id;
  }
  public String toString(){
    return (name+"  Department: "+ dept+" Year:"+ year+"  Id:"+ std_id);
  }
}

public class ArrObj{
  public static void main(String args[]){
    Stud[] arr;

    arr = new Stud[5];

    arr[0] = new Stud("Satyam Bhardwaj", "CSE", 3, 3422);
    arr[1] = new Stud("Ramesses", "CSE", 3, 5422);
    arr[2] = new Stud("Krishnakant", "ECE", 4, 3522);
    arr[3] = new Stud("Kewal", "MEch", 30, 33422);
    arr[4] = new Stud("Rishav", "ELE", 23, 3998422);
    System.out.println(arr[0]);
    System.out.println(arr[1]);
    System.out.println(arr[2]);
    System.out.println(arr[3]);
    System.out.println(arr[4]);
  }
}
