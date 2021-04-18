import java.util.Scanner;
import java.lang.*;
class Angle{
  public double findAngle(int hr, int min){
    // if( min == 0) {
    //   // System.out.println("Angle is : 0");
    //   return 0;
    // }
    //angle that hour hand makes with minute hand
    double diff = (hr*5.0 - min)*6.0;
    //angle between floor hour hand and minute elapsed:
    double extraM =5.0*6*(min*1.0/60);
    double ans;
    if( diff > 0 ){
      ans = diff + extraM;
    }
    else ans = Math.abs(diff) - extraM;
    ans = Math.abs(ans);
    return Math.min(ans, 360.0-ans);

  }
  public static void main(String args[]){
    Scanner in = new Scanner(System.in);
    String s = in.nextLine();
    System.out.println("time is: " + s);
    int ind = s.indexOf(":");
    s.substring(0, ind-1);
    s.substring(ind+1);
    int hr = Integer.parseInt(s.substring(0, ind));
    int min = Integer.parseInt(s.substring(ind+1));
    // System.out.println("hr : " + hr);
    // System.out.println("min : " + min);
    Angle obj = new Angle();
    double ans = obj.findAngle(hr, min);
    System.out.println("Angle is : " + Math.abs(ans));
  }
}
