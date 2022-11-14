//time representation using mulible constuchers 
public class multibleConstruchers {
	public static void main(String args[]) 
	{
		time type0 = new time();
		time type1 = new time(5);
		time type2 = new time(12,52);
		time type3 = new time(5,59,32);
		System.out.println(type0.gettime());
		System.out.println(type1.gettime());
		System.out.println(type2.gettime());
		System.out.println(type3.gettime());
	}

}
