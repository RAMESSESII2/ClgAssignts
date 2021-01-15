import java.io.*;

class CustomExceptionEx extends Exception
{
  public CustomExceptionEx(String string)
  {
    super(string);
  }
}

class Sample
{
  public String checkNum(int num)
  throws CustomExceptionEx
  {
    if (num == 0)
    {
      throw new CustomExceptionEx("Number is zero");
    }
    else
    {
      return "Number is non zero";
    }
  }
}
public class CustomEx
{
  public static void main(String[] args)
  {
    Sample object = new Sample();
    Sample object1 = new Sample();
    try
    {
      //calling the method
      String bar = object.checkNum(0);
    }
    catch (CustomExceptionEx e)
    {
      e.printStackTrace();
    }
  }
}
