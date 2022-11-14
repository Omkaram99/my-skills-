//multidimensional arrays 

 class arrayInisalizar {
	public static void  main(String arg[])
	{
		int a[]= {1,2,3,4,5};//single dimensional array
		int a2[][]= {{1,2,3},//multi dimenstional array
					 {4,5,6},
					 {7,8,9}};
		print(a);System.out.print("\n\n multi dimenstional array \n");
		print(a2);
		
		
		
		}
	public static void  print(int a[]) 
	{
		for(int x:a) {System.out.print(x+" ");}
	}
	public static void  print(int a[][]) 
	{
		for(int i=0;i<a.length;i++) {
			for(int j=0;j<a[i].length;j++) {
			System.out.print(a[i][j]+" ");}System.out.println();}
	}	
	}
	

