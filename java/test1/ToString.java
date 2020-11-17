public class ToString{
  String d_name;
  int rating;
  String model_name;
  int price;
  public ToString(String d_name, int rating, String model_name, int price){
    this.d_name = d_name;
    this.rating = rating;
    this. model_name= model_name;
    this.price = price;
  }
  public String toString(){
    return (d_name+" "+ model_name+" "+ rating+" "+ price);
  }
  public static void main(String[] args)
  {
    ToString spec = new ToString("Samsung", 5, "M_31", 20000);
    System.out.println(spec);
  }
}


