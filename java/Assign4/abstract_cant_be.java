// NO we cant create an abstract class.
// This is evident from the following example.
//

abstract class abst{
    abstract void m();
    void display(){
        System.out.println("this is an abstract class");
    }
}

public class abstrct_cant_be{
    public static void main(String[] args){
        abst c = new abst();
        c.display();
    }
}
