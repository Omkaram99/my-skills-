 import java.util.Scanner; 
public class sortArray 
{
	public static void main(String args[]) 
	{
		Scanner in = new Scanner(System.in);
		System.out.print("Enter number of elements to enter : ");
		int n=in.nextInt();
	int[] array =new int[n]	;
	//System.out.println(array[2]);
	for (int i=0;i<n;i++) 
		{System.out.print("Entre the element "+(i+1)+": ");
		 array[i]=in.nextInt();
	 	}System.out.print("Elements in the list are: ");
	for (int j=0;j<n;j++) 
	{System.out.print(array[j]);
	 if(j<n-1) {System.out.print(",");}
	 else {System.out.print(".");}
	 
 	}
	sort(array);
	System.out.print("\n\nArray after sorting(Asinding order) : ");
	for (int j=0;j<n;j++) 
	{System.out.print(array[j]);
	 if(j<n-1) {System.out.print(",");}
	 else {System.out.print(".");}}
	
	System.out.print("\n\nArray after sorting(Disending order) : ");
	for (int j=n-1;j>=0;j--) 
	{System.out.print(array[j]);
	 if(j>0) {System.out.print(",");}
	 else {System.out.print(".");}}
	}
	public static  void sort(int a[]) {int k=0;
		for(int i=0;i<=a.length;i++) {
			for(int j=i+1;j<a.length;j++) {
				if(a[i]>a[j]) {k=a[i];a[i]=a[j];a[j]=k;}
			}
		}
		
	}
	
}
