public class ComplexNumber{
  int real;
  int imaginary;
  public ComplexNumber(int real, int imaginary){
    this.real = real;
    this.imaginary = imaginary;
  }
  public String toString(){
    return (real+" + i(" + imaginary+")");
  }
  public static void main(String[] args)
  {
    ComplexNumber c1 = new ComplexNumber(5, 7);
    System.out.println("a= "+c1);
    ComplexNumber c2 = new ComplexNumber(3, 9);
    System.out.println("b= "+c2);
    ComplexNumber add = new ComplexNumber(c1.real+c2.real, c1.imaginary+c2.imaginary);
    System.out.println("a+b= "+add);
    ComplexNumber sub = new ComplexNumber(c1.real-c2.real, c1.imaginary-c2.imaginary);
    System.out.println("a-b= "+sub);
    ComplexNumber mult = new ComplexNumber((c1.real*c2.real)-(c1.imaginary*c2.imaginary), (c1.real*c2.imaginary)+(c1.imaginary*c2.real));
    System.out.println("a*b= "+mult);
  }
}

