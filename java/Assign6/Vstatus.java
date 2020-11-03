interface Vehicle{
  void gear(int g);
  void speed(int s);
  void brakes(int b);
}

class Bike implements Vehicle{
  int gear;
  int speed;
  public void gear(int g){
    gear = g;
  }
  
  public void speed(int ss){
    speed = speed + ss;
  }

  public void brakes(int b){
    speed = speed - b;
  }

  public void printstatus(){
    System.out.println("Speed = "+speed+" Gear no. = "+gear);
  }
}

class Car implements Vehicle{
  int gear; 
  int speed = 0;
  public void gear(int g){
    gear = g;
  }
  public void speed(int s){
    speed = speed + s;
  }
  public void brakes(int b){
    speed = speed - b;
  }

  public void printstatus(){
    System.out.println("Speed = "+speed+" Gear no. = "+gear);
  }
}

class Vstatus{
  public static void main(String[] args){
    Bike ninja = new Bike();
    Car tesla = new Car();
    System.out.println("For the bike");
    ninja.gear(1);
    ninja.speed(20);
    ninja.brakes(10);
    ninja.printstatus();

    ninja.gear(4);
    ninja.speed(70);
    ninja.brakes(10);
    ninja.printstatus();
    System.out.println("For the car");
    tesla.gear(1);
    tesla.speed(20);
    tesla.brakes(10);
    tesla.printstatus();

    tesla.gear(4);
    tesla.speed(150);
    tesla.brakes(10);
    tesla.printstatus();
  }
} 
