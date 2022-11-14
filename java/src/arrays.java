import java.util.Scanner;
class arrays {
	public static void main(String arg[])
	{Scanner input =new Scanner(System.in);
		System.out.print("enter the no.of elemrnts to enter in the list : ");
		int n =input.nextInt();int ar[]=new int[n];
		for (int i=0;i<n;i++) {
			System.out.print("enter the element "+ (i+1) + " : ");
			ar[i]=input.nextInt();
			
		}
		for(int x:ar) {System.out.println(x);}
		edit(ar);
		for(int y:ar) {System.out.println(y);}
		EditClass obj =new EditClass();
		obj.editClass(ar);
		for(int y:ar) {System.out.println(y);}input.close();
	}
	public static void edit(int ch[]) {
		System.out.println("edit in same class");
		for (int i=0;i<ch.length;i++) {
			ch[i]+=10;
			
		}
	}
	
	
}
