import java.util.Scanner;
public class simpuleCaluculator {
public static void main(String args[])
{ double x,y;int c;
	Scanner input = new Scanner(System.in);
	System.out.println("enter x value & y value");x=input.nextDouble();y=input.nextDouble();
	do {System.out.print("\n\n***choose the following oparation***\n1-addition\n2-subration\n3-multiplication\n4-division\n");
	c=input.nextInt();
	
	if (c==1) {
System.out.println("sum of "+(x+y));}else if (c==2) {
System.out.println("diffrence is "+(x-y));}
else if (c==3) {System.out.println("multipication is "+(x*y));}else if (c==4) {System.out.println("division is "+(x/y));}
	}while(c!=0);
	
	
}
}
