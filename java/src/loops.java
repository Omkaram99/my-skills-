import java.util.Scanner;
public class loops {
	public static void main (String args[]) {
	int a,b,c;
	Scanner input=new Scanner(System.in);
	do {
	System.out.print("a valu is : \n");
	c=input.nextInt();int c1=c;
	
	for(b=0;b<c;b++) {
		for (int b12=c1;b12>0;b12--) { System.out.print(" ");
			
		}
		for (int b1=0;b1<=b;b1++) {System.out.print("*");}	System.out.print("\n");	c1--;
	}
	System.out.print("\n");
	}while(c!=0);
	}}
