abstract class bank{
    int Bank_id;
    String bank_name, IFSC_code;
    bank(int id, String name, String IFSC){
        Bank_id = id;
        bank_name = name;
        IFSC_code = IFSC;
    }
    abstract void getROI();   
    void display(){
        System.out.println("Bank_id= "+Bank_id+", bank_name= "+bank_name+", IFSC_code = " +IFSC_code);
    }
}

class SBI extends bank{
    int fd;
    SBI(){
        super(12, "SBI", "sbi394");
    }
    int roi = 5;
    void getROI(){
        System.out.println("ROI for SBI is "+roi +"%");
    }
    double total(int fd){
        double sum =0;
        sum = (fd *roi)/100;
        return sum;
    }
}
class HDFC extends bank{
    HDFC(){
        super(24, "HDFC", "hdfc435");
    }
    int roi = 8;
    void getROI(){
        System.out.println("ROI for HDFC is "+roi +"%");
    }
    double total(int fd){
        double sum =0;
        sum = (fd *roi)/100;
        return sum;
    }
}
class PNB extends bank{
    PNB(){
        super(46, "PNB", "pnb75984");
    }
    int roi = 6;
    void getROI(){
        System.out.println("ROI for PNB is "+roi +"%");
    }
    double total(int fd){
        double sum =0;
        sum = (fd *roi)/100;
        return sum;
    }
}

class main{
    static int fd = 500000;
    public static void main(String args[]){

        double gt;
        String g;
        SBI first = new SBI();
        first.display();
        HDFC sec = new HDFC();
        sec.display();
        PNB trd = new PNB();
        trd.display();
        first.getROI();
        sec.getROI();
        trd.getROI(); 
        if (first.total(fd)>sec.total(fd)){
            gt =first.total(fd);
            g = "SBI";
        }
        else{
            gt = sec.total(fd);
            g = "HDFC";
        }
        if (gt<trd.total(fd)){
            System.out.println("PNB is better");
        }
        else{
            System.out.println(" Better profit is with "+g);
        }
            
    }
}
