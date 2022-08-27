public class ovi {
    static Scanner in = new Scanner(System.in);
    static String userInput = null;
   public static void main(String[] args) {
    nahid();
    while (true)
        {
            System.out.print("Are You Want to Continue (Y/N) ?");
            userInput = scan.next();
            if (userInput.equalsIgnoreCase("Y"))
                nahid();
            else if (userInput.equalsIgnoreCase("N"))
            {
                System.out.print("Thank you !!");
                break;
            }
            else{
                    System.out.print("Try Again With (Y/N) only !");
            }

        }

  }
  public static void nahid(){
    float a,b=0,c=0;
       int x;
       while(( a =in.nextFloat())!=2){

                    if(a>10 || a<0){
                System.out.println("nota invalida");
            }
            else   if(c==0){
                b=a;
                c++;
            }
            else{
                float aa = (float)(a+b)/2;
                System.out.printf("media = %.2f\n",aa);

                c=0;
                break;
            }
        }
    }
}
