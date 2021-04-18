import java.util.Scanner;
import java.lang.*;
class DivideWOdivision{
  private static void divide(int num, int den){
    int sign = 1;
    if( num < 0 || den < 0){
      sign = -1;
      if( num < 0 && den < 0 ) sign = 1;
    }
    num = Math.abs(num);
    den = Math.abs(den);
    int quotient = 0;
    while( num >= den ){
      num -= den;
      quotient++;
    }
    int remainder = num;
    // if( remainder != 0 ) quotient--;
    if( sign == -1 && remainder != 0 ){
      quotient++;
      remainder = -den + remainder;
    }
    System.out.println("Quotient is : " + sign*quotient);
    System.out.println("Remainder is : " + remainder);

  }
  public static void main(String args[]){
    Scanner in = new Scanner(System.in);
    int num = in.nextInt();
    int den = in.nextInt();
    divide(num, den);
  }
}
