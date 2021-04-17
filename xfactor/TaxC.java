import java.util.Scanner;
import java.lang.*;
class TaxC{
  public static void main(String args[]){
    Scanner in = new Scanner(System.in);
    double amount = in.nextDouble();
    if( amount < 100000 ){
      amount *= 0.005;
    }
    else if( amount >= 100000 && amount <= 1000000 ){
      amount *= 0.02;
    }
    else amount *= 0.04;

    System.out.println("Tax is : " + amount);
  }
}
