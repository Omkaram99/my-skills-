import java.util.Scanner;
 class Match {
	 public static void main (String arg []) 
	 { Scanner input = new Scanner(System.in);
	 System.out.println("enter num 1 : ");
		 double a=input.nextDouble();
		 		 int b=(int)a;double c=(double)b;
	if (a==c) {
		print(b);
	}	
	else {print(a);}
	System.out.println("enter num 2 : ");
	 double a1=input.nextDouble();
	 		 int b1=(int)a1;double c1=(double)b1;
if (a1==c1) {
	print(b1);
}	
else {print(a1);}

System.out.println("maximum number of "+a+","+a1+" = "+ Math.max(a,a1) );
System.out.println("minume of "+a+","+a1+" = "+ Math.min(a,a1) );
	 }
public static void print(int in) 
{
	System.out.println("squroot of " +in+"= "+ Math.sqrt(in) );
	System.out.println(in+"power 10 = "+ Math.pow(in,10) );
	System.out.println("absuleat of "+in+"= "+ Math.abs(in) );
	
}
public static void print(double in) 
{
	System.out.println("squroot of " +in+"= "+ Math.sqrt(in) );
	System.out.println(in+" power 10 = "+ Math.pow(in,10) );
	System.out.println("absuleat of "+in+"= "+ Math.abs(in) );
	System.out.println("cell of "+in+" = "+ Math.ceil(in) );
	System.out.println("floor of "+in+" = "+ Math.floor(in) );
	
}

}
