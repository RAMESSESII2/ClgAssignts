interface Intaface{
  Intaface(){
    System.out.println("This can't be printed");
  }
}
public class Noconst implements Intaface{
  public static void main(String[] args){
    Noconst obj = new Noconst();
  }
}
