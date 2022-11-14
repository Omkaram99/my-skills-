import java.util.EnumSet;

public class Enum {
	public static void main(String arg[]) {

		for (EnumClass x:EnumClass.values()) {
			System.out.printf(" %s\t%s\t%s\n",x.getname(), x.getage(),x.getgender());
		}
		System.out.println("\nEnumSet.range is : \n");
		for (EnumClass y:EnumSet.range(EnumClass.person2,EnumClass.person4)) {
			System.out.printf(" %s\t%s\t%s\n",y.getname(), y.getage(),y.getgender());
		}
		
	}
}
