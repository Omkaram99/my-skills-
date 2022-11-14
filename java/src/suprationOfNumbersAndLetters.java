import java.util.Scanner;
public class suprationOfNumbersAndLetters {
public static void main(String arg[]) {
	Scanner in = new Scanner(System.in);
	System.out.print("enter here : ");
	String k = in.nextLine();
	int p=0;
	
		System.out.println("enterd string is               : "+k);
		System.out.print("numbers in the string is       : ");
		for (int i=0;i<k.length();i++) {
			
			if(k.charAt(i)>='0' && k.charAt(i)<='9' ) {
		System.out.print(k.charAt(i));
				
				p += k.charAt(i)-48;
			}
			}
		System.out.print("\nletters in the string is       : ");
		for (int i=0;i<k.length();i++) {
			
			if(k.charAt(i)>='0' && k.charAt(i)<='9' ) {
				//System.out.print(k.charAt(i)+i);
				
				
			}
			else {
		System.out.print(k.charAt(i));
				
			}}
		//char v1 = '9',v2 = '0',v3 ='5';int p1 = '1'-48; 
		
		System.out.print("\nsum of number in the string is : " + p);in.close();
						}
			
		}
		


