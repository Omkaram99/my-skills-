import java.util.Scanner;
class whileLoop {
public static void main (String arg[]) {
	Scanner input = new Scanner(System.in);
	System.out.println("enter numbers to print");
	int a=input.nextInt();int b=0;
	while(b<a) {b++; System.out.print(b + " ");}
}	 
}
